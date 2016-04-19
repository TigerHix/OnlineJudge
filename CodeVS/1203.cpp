#include <iostream>

using namespace std;

int main() {
    double x, y;
    cin >> x >> y;
    if ((float) x == (float) y) {
        cout << "yes";
    } else {
        cout << "no";
    }
    return 0;
}