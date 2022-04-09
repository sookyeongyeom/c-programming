#include <stdio.h>

int main()
{
    double num1, num2;

    scanf("%lf %lf", &num1, &num2);
    printf("덧셈 = %lf\n", num1 + num2);
    printf("뺄셈 = %lf\n", num1 - num2);
    printf("곱셈 = %lf\n", num1 * num2);
    printf("나눗셈 = %lf", num1 / num2);

    return 0;
}