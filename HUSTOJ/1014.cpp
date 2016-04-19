#include <stdio.h>

const int LEN = 3;

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int n[LEN];
    for (int i = 0; i < LEN; i++) {
        scanf("%d", &n[i]);
    }
    if (n[0] < n[1]) {
        swap(&n[0], &n[1]);
    }
    if (n[1] < n[2]) {
        swap(&n[1], &n[2]);
    }
    if (n[0] < n[1]) {
        swap(&n[0], &n[1]);
    }
    for (int i = 0; i < LEN; i++) {
        printf("%d", n[i]);
        if (i + 1 < LEN) {
            printf(" ");
        }
    }
    return 0;
}
