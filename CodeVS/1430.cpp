#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n > 2) {
        int lastDigit = n % 10;
        if (lastDigit != 3 && lastDigit != 7) {
            cout << "\\n";
            return 0;
        }
        for (int i = 2; i < std::sqrt(n); i++) {
            lastDigit = n % 10;
            if (lastDigit != 3 && lastDigit != 7) {
                continue;
            }
            if (n % i == 0) {
                cout << "\\n";
                return 0;
            }
        }
    } else if (n < 2) {
        cout << "\\n";
        return 0;
    }
    cout << "\\t";
    return 0;
}