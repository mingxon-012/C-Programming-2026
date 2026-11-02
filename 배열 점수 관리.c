#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10   // 학생 수 (여기만 바꾸면 됨)

int main()
{
    int number[SIZE];
    int total = 0;
    int max, min;
    float avg = 0.0;

    // 1. 점수 생성 (0~100)
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        number[i] = rand() % 101;
    }

    // 2. 학생별 점수 출력 (5명씩 한 줄)
    printf("===== 학생 점수 =====\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%3d번:%3d점\t", i + 1, number[i]);
        if ((i + 1) % 5 == 0) printf("\n");
    }

    // 3. 합계, 평균
    for (int i = 0; i < SIZE; i++) {
        total += number[i];
    }
    avg = (float)total / SIZE;

    // 4. 최댓값, 최솟값
    max = number[0];
    min = number[0];
    for (int i = 1; i < SIZE; i++) {
        if (max < number[i]) max = number[i];
        if (min > number[i]) min = number[i];
    }

    // 5. 결과 출력
    printf("\n---------------------\n");
    printf("최댓값 : %d점\n", max);
    printf("최솟값 : %d점\n", min);
    printf("평  균 : %.2f점\n", avg);

    return 0;
}