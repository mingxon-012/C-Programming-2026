#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 실습 #1. 거듭제곱 구하기
void exerc1(void) {
    int n, r, abs_r;
    double x;

    x = 1.0;
    printf("input n, r : ");
    scanf("%d%d", &n, &r);

    if (r < 0) abs_r = -r;
    else abs_r = r;

    for (int i = 0; i < abs_r; i++) {
        x *= n;
    }
    if (r < 0) x = 1.0 / x;

    printf("%d의 %d승은 %lf 입니다.", n, r, x);
}

// 실습 #2. 팩토리얼 구하기
void exerc2(void) {
    int n, result;
    result = 1;
    printf("input n : ");
    scanf("%d", &n);
    for (int i = n; i > 0; i--) result *= i;
    printf("%d factorial = %d입니다.", n, result);
}

// 실습 #3. 피보나치 수열 (0, 1, 1, 2, 3, 5, 8, ...)
void exerc3(void) {
    int n;
    int n_1, n_2, result;
    n_2 = 0;   // 0번째 수
    n_1 = 1;   // 1번째 수
    printf("input n : ");
    scanf("%d", &n);

    if (n == 0) result = n_2;
    else if (n == 1) result = n_1;
    else {
        for (int i = 2; i <= n; i++) {
            result = n_1 + n_2;
            n_2 = n_1;
            n_1 = result;
        }
    }

    printf("%d 번째 숫자는 %d 입니다.", n, result);
}

// 실습 #4. 평균 구하기 (-1 입력 시 종료)
void exerc4(void) {
    int sum = 0;
    double avg;
    int score;
    int i = 0;

    while (1) {
        printf("input score : ");
        scanf("%d", &score);
        if (score == -1) break;
        sum += score;
        i++;
    }

    if (i > 0) {
        avg = sum / (double)i;
        printf("avg = %lf\n", avg);
    }
    else {
        printf("입력된 점수가 없습니다.\n");
    }
}

// 실습 #5. 이중 반복문 (삼각형 모양 출력)
void exerc5(void) {
    char star = '*';
    int line;

    printf("input line : ");
    scanf("%d", &line);

    for (int i = 0; i < line; i++) {

        for (int j = 0; j < line - i - 1; j++)
            printf(" ");

        int star_count = i * 2 + 1;

        for (int j = 0; j < star_count; j++)
            printf("%c", star);

        printf("\n");
    }
}

int main(void) {
    int choice = 0;

    // 1~5 사이 번호가 들어올 때까지 반복해서 입력받기
    while (choice < 1 || choice > 5) {
        printf("실행할 실습 번호를 입력하세요 (1~5) : ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 5) {
            printf("1~5 사이의 번호만 입력할 수 있어요.\n\n");
        }
    }

    if (choice == 1)      exerc1();
    else if (choice == 2) exerc2();
    else if (choice == 3) exerc3();
    else if (choice == 4) exerc4();
    else                  exerc5();

    printf("\n");
    return 0;
}