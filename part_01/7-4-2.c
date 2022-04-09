#include <stdio.h>

int main()
{
    int i, num, fac = 1;

    printf("정수를 입력하세요 = "), scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        fac *= i;
    }

    printf("입력한 정수의 팩토리얼 = %d", fac);

    return 0;
}