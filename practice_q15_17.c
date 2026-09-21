#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define READ  0x01
#define WRITE 0x02
#define EXEC  0x04

// 15. 초를 시,분,초로 변환해서 출력
void printTimeFromSeconds(int total) {
    int hours = total / 3600;
    int minutes = (total % 3600) / 60;
    int seconds = total % 60;
    printf("15번 결과: %d시간 %d분 %d초\n", hours, minutes, seconds);
}

// 16. 합격 여부 판단해서 출력
void printPassResult(int score, int attendance) {
    int passed = (score >= 60) && (attendance >= 80);
    printf("16번 결과: %s (%d)\n", passed ? "합격" : "불합격", passed);
}

// 17. READ, WRITE 권한에 EXEC 권한을 추가해서 반환
unsigned int addExecPermission(unsigned int permission) {
    permission |= EXEC;
    return permission;
}

int main(void) {
    // 15번: 초 단위 입력받기
    int total;
    printf("15번 - 총 초를 입력하세요: ");
    scanf("%d", &total);
    printTimeFromSeconds(total);

    // 16번: 점수와 출석률 입력받기
    int score, attendance;
    printf("16번 - 점수와 출석률을 입력하세요 (예: 75 85): ");
    scanf("%d %d", &score, &attendance);
    printPassResult(score, attendance);

    // 17번: 권한값은 READ | WRITE로 시작
    unsigned int permission = READ | WRITE;
    permission = addExecPermission(permission);
    printf("17번 결과 (권한값): 0x%02X\n", permission);

    return 0;
}