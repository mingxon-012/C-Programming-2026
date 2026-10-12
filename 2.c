#include <stdio.h>

int main(void) {
    int num;
    int prev = 0;       
    int streak = 0;     
    int total = 0;      

    while (1) {
        printf("1~9 사이의 정수 입력: ");
        scanf_s("%d", &num);

        if (num < 1 || num > 9) {
            printf("오류: 1~9 사이의 정수를 입력하세요.\n");
            continue;   
        }

        total++;

        if (num == prev) {
            streak++;      
        }
        else {
            streak = 1;   
            prev = num;
        }

        if (streak == 3) {
            break;
        }
    }

    printf("연속 3번 나온 숫자: %d\n", num);
    printf("전체 입력 횟수: %d\n", total);

    return 0;
}