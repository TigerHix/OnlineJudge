#include <iostream>
#include <sstream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int x, y;
    cin >> x >> y;

    int p = 0;
    for (int i = x; i <= y; i += x) {
        for (int j = x; j <= y; j += x) {
            if (gcd(i, j) == x && lcm(i, j) == y) {
                p++;
            }
        }
    }

    cout << p << endl;
    return 0;
}