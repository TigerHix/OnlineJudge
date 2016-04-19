#include <stdio.h>

int main() {
    int i = 0;
    for (char c = 'a'; c <= 'z'; c++) {
        printf("%c", c);
        i++;
        if (i % 13 == 0) {
            printf("\n");
        }
    }
    for (char c = 'z'; c >= 'a'; c--) {
        printf("%c", c);
        i++;
        if (i == 39) {
            printf("\n");
        }
    }
    return 0;
}

