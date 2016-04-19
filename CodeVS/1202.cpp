#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int n, p;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p;
        sum += p;
    }
    cout << sum << endl;
    return 0;
}