#include <iostream>
#include <sstream>

using namespace std;

void merge(int arr[], int l, int m, int r) {

    int k = l;
    int len1 = m - l + 1, len2 = r - m;
    int left[len1], right[len2];

    for (int i = 0; i < len1; i++) {
        left[i] = arr[l + i];
    }
    for (int i = 0; i < len2; i++) {
        right[i] = arr[m + 1 + i];
    }

    int i = 0, j = 0;
    while (i < len1 && j < len2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < len1) {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < len2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void sort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2; // Instead of: (l + r) / 2. This prevents overflow.
        sort(arr, l, m);
        sort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main() {
    int n;
    cin >> n;
    int numbers[n];
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    sort(numbers, 0, n - 1);
    stringstream stream;
    for (int i = 0; i < n; i++) {
        stream << numbers[i] << " ";
    }
    cout << stream.str() << endl;
    return 0;
}