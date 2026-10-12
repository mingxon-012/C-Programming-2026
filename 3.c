#include <stdio.h>

int main(void) {
    int n;

    printf("1~9 사이의 정수 n 입력: ");
    scanf_s("%d", &n);

    if (n < 1 || n > 9) {
        printf("오류: 1~9 사이의 정수를 입력하세요.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {           
        for (int j = 0; j < n; j++) {       
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("*");               
            }
            else {
                printf(" ");               
            }
        }
        printf("\n");                       
    }

    return 0;
}