#include <iostream>

using namespace std;

/**
 * Pattern:
 * x, y
 * x + 1, y
 * x, y + 1
 * x - 1, y
 * x - 1, y
 * x, y - 1
 * x, y - 1
 * x + 1, y
 * x + 1, y
 * x + 1, y
 * x, y + 1
 * x, y + 1
 * x, y + 1
 * ...
 *
 * Diagonal coordinates:
 * [0, 0]
 * [1, 1]
 * [2, 2]
 * ...
 * &
 * [0. 2]
 * [1. 1]
 * [2. 0]
 */

int main() {
    int n;
    cin >> n;

    int square[n][n];
    int x = n / 2, y = x; // Start coordinate

    int len = 1, c = 0;
    bool applyX = true; // else apply 7on y

    for (int i = 1; i <= n * n; i++) {
        square[x][y] = i;
        int *p = applyX ? &x : &y;
        *p += (len % 2 == 0) ? -1 : 1;
        c++;
        if (c == len) {
            c = 0;
            applyX = !applyX;
            if (applyX) {
                len++;
            }
        }
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += square[i][i] + square[i][n - i - 1];
    }

    sum--;

    for (y = n - 1; y >= 0; y--) {
        for (x = 0; x < n; x++) {
            cout << square[x][y] << " ";
        }
        cout << endl;
    }

    cout << sum;

    return 0;
}