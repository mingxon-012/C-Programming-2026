#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
int main()
{
    int number[SIZE];
    int temp;
    int swapped;      // 이번 패스에서 교환이 있었는지 (1: 있음, 0: 없음)
    srand(time(NULL));

    for (int i = 0; i < SIZE; i++) {
        number[i] = (rand() % 100) + 1;
    }

    // 버블 정렬 개선판 (큰 수 → 작은 수)
    for (int i = 0; i < SIZE - 1; i++) {
        swapped = 0;                              // 패스 시작 전에 초기화
        for (int j = 0; j < SIZE - 1 - i; j++) {
            if (number[j] < number[j + 1]) {
                temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
                swapped = 1;                      // 교환이 일어났음을 기록
            }
        }
        if (swapped == 0) break;                  // 교환이 없으면 정렬 완료
    }

    for (int i = 0; i < SIZE; i++) {
        printf("%3d\t", number[i]);
        if ((i + 1) % 10 == 0) printf("\n");
    }

    return 0;
}