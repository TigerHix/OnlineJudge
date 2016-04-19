#include <stdio.h>

const int LEN = 3;

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[LEN];
    a[0] = n / 100;
    a[1] = n / 10 % 10;
    a[2] = n % 10;
    if (a[0] < a[1])
        swap(&a[0], &a[1]);
    if (a[1] < a[2])
        swap(&a[1], &a[2]);
    if (a[0] < a[1])
        swap(&a[0], &a[1]);
    printf("%d%d%d", a[0], a[1], a[2]);
    return 0;
}
