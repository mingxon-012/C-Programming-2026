#include <stdio.h>

int main(void) {
    double midterm, final, assignment;
    double weighted_score;

    // 중간고사, 기말고사, 과제 점수를 실수로 입력받음
    printf("중간고사 기말고사 과제 점수를 입력하세요: ");
    scanf("%lf %lf %lf", &midterm, &final, &assignment);

    // 중간 30%, 기말 40%, 과제 30% 반영
    weighted_score = (midterm * 0.3) + (final * 0.4) + (assignment * 0.3);

    // 소수점 둘째 자리까지 출력
    printf("weighted_score=%.2f\n", weighted_score);

    return 0;
}
