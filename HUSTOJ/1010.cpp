#include <stdio.h>

const int LEN = 3;

int main() {
    int n[LEN];
    for (int i = 0; i < LEN; i++) {
        scanf("%d", &n[i]);
    }
    int max = n[0];
    for (int i = 1; i < LEN; i++) {
        if (n[i] > max) max = n[i];
    }
    printf("%d", max);
    return 0;
}