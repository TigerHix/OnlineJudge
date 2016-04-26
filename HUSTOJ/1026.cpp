#include <stdio.h>
#include <cmath>

int main() {
    long n;
    bool prime = true;
    scanf("%li", &n);
    if (n <= 1) {
        prime = false;
    }
    if (n != 2) {
        for (int d = 2; d < sqrt(n); d++) {
            if (d % 2 == 0) continue;
            if (n % d == 0) {
                prime = false;
                break;
            }
        }
    }
    printf("%s", prime ? "T" : "F");
    return 0;
}
