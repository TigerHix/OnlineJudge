#include <iostream>

using namespace std;

int main() {
    int n;
    __int64 sum;
    while (cin >> n) {
        sum = n / 2 * (n + 1);
        if (n % 2 != 0) {
            sum += (n + 1) / 2;
        }
        cout << sum << endl << endl;
    }
    return 0;
}