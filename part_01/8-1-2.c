#include <stdio.h>

int main()
{
    int num1, num2, sub;

    printf("두 정수를 입력하세요 = "), scanf("%d %d", &num1, &num2);

    sub = num1 > num2 ? num1 - num2 : num2 - num1;

    printf("두 수의 차 = %d", sub);

    return 0;
}