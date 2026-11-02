#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define STUDENT_COUNT 30 

int main()
{
    int scores[STUDENT_COUNT];
    int sum = 0;
    int max_score, min_score;
    double average;

    srand((unsigned int)time(NULL));
    for (int i = 0; i < STUDENT_COUNT; i++) {
        scores[i] = rand() % 101;
    }
    max_score = scores[0];
    min_score = scores[0];

    printf("학생별 점수 목록");
    for (int i = 0; i < STUDENT_COUNT; i++) {
        if (i % 10 == 0) printf("\n");
        printf("%4d점", scores[i]);

        sum += scores[i];

        if (scores[i] > max_score) max_score = scores[i];
        if (scores[i] < min_score) min_score = scores[i];
    }

    average = (double)sum / STUDENT_COUNT;

    printf("\n총 학생 수 : %d명", STUDENT_COUNT);
    printf("\n최댓값     : %d점", max_score);
    printf("\n최솟값     : %d점", min_score);
    printf("\n평균       : %.2f점\n", average);

    return 0;
}
