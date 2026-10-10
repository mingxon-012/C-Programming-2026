#include <stdio.h>

int main() {
    int month, year;

    printf("월을 입력하세요 : ");
    scanf_s("%d", &month);

    switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("%d월은 31일까지 있습니다.\n", month);
        break;

    case 4: case 6: case 9: case 11:
        printf("%d월은 30일까지 있습니다.\n", month);
        break;

    case 2:
        printf("연도를 입력하세요 : ");
        scanf_s("%d", &year);

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d년 2월은 29일까지 있습니다. (윤년)\n", year);
        }
        else {
            printf("%d년 2월은 28일까지 있습니다. (평년)\n", year);
        }
        break;

    default:
        printf("잘못된 월을 입력하셨습니다.\n");
        break;
    }

    return 0;
}