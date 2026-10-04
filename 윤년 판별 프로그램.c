#include <stdio.h>
#include <io.h>
#include <fcntl.h>

int main(void)
{
    int year;

    /* 콘솔 출력을 유니코드 모드로 변경 */
    _setmode(_fileno(stdout), _O_U16TEXT);

    /* 연도를 입력하세요: */
    wprintf(L"\uC5F0\uB3C4\uB97C \uC785\uB825\uD558\uC138\uC694: ");
    fflush(stdout);

    if (scanf_s("%d", &year) != 1)
    {
        /* 올바른 정수를 입력하세요. */
        wprintf(L"\uC62C\uBC14\uB978 \uC815\uC218\uB97C "
            L"\uC785\uB825\uD558\uC138\uC694.\n");
        return 1;
    }

    if (year <= 0)
    {
        /* 1 이상의 연도를 입력하세요. */
        wprintf(L"1 \uC774\uC0C1\uC758 \uC5F0\uB3C4\uB97C "
            L"\uC785\uB825\uD558\uC138\uC694.\n");
        return 1;
    }

    if (year % 400 == 0)
    {
        wprintf(L"\uC724\uB144\uC785\uB2C8\uB2E4.\n"); /* 윤년입니다. */
    }
    else if (year % 100 == 0)
    {
        wprintf(L"\uD3C9\uB144\uC785\uB2C8\uB2E4.\n"); /* 평년입니다. */
    }
    else if (year % 4 == 0)
    {
        wprintf(L"\uC724\uB144\uC785\uB2C8\uB2E4.\n"); /* 윤년입니다. */
    }
    else
    {
        wprintf(L"\uD3C9\uB144\uC785\uB2C8\uB2E4.\n"); /* 평년입니다. */
    }

    return 0;
}