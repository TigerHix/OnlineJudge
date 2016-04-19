#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n <= 10) {
        printf("%.2f", 2.5);
    } else {
        printf("%.2f", 2.5 + (n - 10) * 1.5);
    }
    return 0;
}