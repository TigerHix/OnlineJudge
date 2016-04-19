#include <stdio.h>

const int daySize[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    int year, month;
    scanf("%d %d", &year, &month);
    if (month == 2 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))) {
        printf("29");
    } else {
        printf("%d", daySize[month]);
    }
    return 0;
}
