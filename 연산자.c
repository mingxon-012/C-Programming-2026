#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1. 인치 -> cm 변환 함수
void EXERC1(void) {
    double inch, cm;

    printf("Enter inch: ");
    scanf("%lf", &inch);

    cm = inch * 2.54;

    printf("%.2f inch = %.2f cm\n\n", inch, cm);
}

// 2. 섭씨 -> 화씨 변환 함수
void EXERC2(void) {
    double celsius, fahrenheit;

    printf("Enter Celsius (C): ");
    scanf("%lf", &celsius);

    fahrenheit = (celsius * 1.8) + 32;

    printf("%.2f C = %.2f F\n\n", celsius, fahrenheit);
}

// 3. 원의 넓이 계산 함수
void EXERC3(void) {
    double radius, area;
    const double PI = 3.1415926535;

    printf("Enter radius: ");
    scanf("%lf", &radius);

    area = radius * radius * PI;

    printf("Area of circle: %.2f\n\n", area);
}

int main(void) {
    printf("--- Result ---\n");

    // 각 예제 함수 호출
    EXERC1();
    EXERC2();
    EXERC3();

    return 0;
}