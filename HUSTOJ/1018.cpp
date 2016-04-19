#include <stdio.h>

int main() {
    int n, sum;
    scanf("%d", &n);
    n = ++n / 2;
    sum = n * (2 * 1 + (n - 1) * 2) / 2;
    printf("%d", sum);
    return 0;
}

