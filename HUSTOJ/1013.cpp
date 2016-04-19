#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n > 85) {
        printf("%s", "VERY GOOD");
    } else if (n > 59) {
        printf("%s", "GOOD");
    } else {
        printf("%s", "BAD");
    }
    return 0;
}