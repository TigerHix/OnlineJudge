#include <stdio.h>

const int LEN = 3;

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int a[LEN];
    for (int i = 0; i < LEN; i++) {
        scanf("%d", &a[i]);
    }
    if (a[0] > a[1])
        swap(&a[0], &a[1]);
    if (a[1] > a[2])
        swap(&a[1], &a[2]);
    if (a[0] > a[1])
        swap(&a[0], &a[1]);
    printf("%s", a[0] + 2 == a[2] ? "TRUE" : "FALSE");
    return 0;
}
