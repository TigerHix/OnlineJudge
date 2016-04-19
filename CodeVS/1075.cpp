#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int numbers[1001] = {};
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        numbers[p]++;
    }
    int count = 0;
    stringstream stream;
    for (int i = 1; i <= 1000; i++) {
        if (numbers[i] > 0) {
            count++;
            stream << i << " ";
        }
    }
    cout << count << endl << stream.str() << endl;
    return 0;
}