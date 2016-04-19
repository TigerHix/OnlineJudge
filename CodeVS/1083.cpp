#include <iostream>
#include <sstream>

using namespace std;

/**
 * Cantor table:
 * 1/1
 * 1/2
 * 2/1
 * 3/1
 * 2/2
 * 1/3
 * 1/4
 * 2/3
 * 3/2
 * 4/1
 * 5/1
 * 4/2
 * 3/3
 * 2/4
 * 1/5
 *
 * numerator: 1 | 1, 2, 3, 2, 1 | 1, 2, 3, 4, 5, 4, 3, 2, 1 | ...
 * denominator 1, 2, 1 | 1, 2, 3, 4, 3, 2, 1 | 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1 | ...
 */

void control(int *i, bool *goesUp, int *max) {
    if (!*goesUp) {
        if (*i == 1) {
            *goesUp = true;
        } else {
            *i = *i - 1;
        }
    } else {
        if (*i == *max) {
            *max += 2;
            *goesUp = false;
            *i = *i - 1;
        } else {
            *i = *i + 1;
        }
    }
}

string computeElementAt(int n) {
    if (n == 1) return "1/1";
    int nu = 1, de = 1;
    int maxNu = 3, maxDe = 2;
    bool upNu = false, upDe = true;
    for (int i = 1; i < n; i++) {
        control(&nu, &upNu, &maxNu);
        control(&de, &upDe, &maxDe);
    }
    stringstream stream;
    stream << nu << "/" << de;
    return stream.str();
}

int main() {
    int n;
    cin >> n;
    cout << computeElementAt(n) << endl;
    return 0;
}