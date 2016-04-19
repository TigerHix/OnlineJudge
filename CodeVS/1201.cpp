#include <iostream>

using namespace std;

int main() {
    int min = 2147483647, max = -2147483648;
    int n, p;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p;
        if (p < min) min = p;
        if (p > max) max = p;
    }
    cout << min << " " << max << endl;
    return 0;
}