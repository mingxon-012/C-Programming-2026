#include <stdio.h>

int main(void) {
    int score;
    int count = 0;
    int sum = 0;

    while (count < 3) {
        printf("점수 입력 (종료: -1): ");
        scanf_s("%d", &score);

        if (score == -1) {          // 종료 조건 (범위 검사보다 먼저)
            break;
        }

        if (score < 0 || score > 100) {   // 범위 밖이면 오류 안내 후 다시 입력
            printf("오류: 0~100 사이의 점수를 입력하세요.\n");
            continue;
        }

        sum += score;   // 유효한 점수일 때만 합계 증가
        count++;        // 유효한 점수일 때만 개수 증가
    }

    if (count == 0) {
        printf("입력된 점수가 없습니다.\n");
    }
    else {
        printf("유효한 점수 개수: %d\n", count);
        printf("평균: %.2f\n", (double)sum / count);
    }

    return 0;
}