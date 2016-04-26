#include <stdio.h> 

int gcd(int m, int n) {
    if (n == 0) {
        return m;
    } else {
        return gcd(n, m % n);
    }
}

int lcm(int m, int n) {
    return m * n / gcd(m, n);
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d", lcm(m, n));
    return 0;
}