#include <stdio.h>

int main() {
    char c;
    int capitals = 0, smalls = 0, digits = 0;
    while ((c = (char) getchar()) != '#') {
        if (c >= 'A' && c <= 'Z') {
            capitals++;
        } else if (c >= 'a' && c <= 'z') {
            smalls++;
        } else if (c >= '0' && c <= '9') {
            digits++;
        }
    }
    printf("%d %d %d", capitals, smalls, digits);
    return 0;
}
