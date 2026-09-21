#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    double height, weight;
    double bmi;

    // Read height(m) and weight(kg) as doubles
    printf("Enter height(m) and weight(kg): ");
    scanf("%lf %lf", &height, &weight);

    // BMI = 몸무게 / (키 * 키)
    bmi = weight / (height * height);

    // 소수점 둘째 자리까지 출력
    printf("bmi=%.2f\n", bmi);

    return 0;
}
