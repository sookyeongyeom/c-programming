#include <stdio.h>

int main()
{
    int num1, num2, sum = 0;

    printf("두 개의 정수 = "), scanf("%d %d", &num1, &num2);

    for (; num1 <= num2; num1++)
    {
        sum += num1;
    }

    printf("Result = %d", sum);

    return 0;
}