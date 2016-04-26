#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int c = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 2 && i % 5 == 3 && i % 7 == 2) {
            c++;
        }
    }
    printf("%d", c);
}
