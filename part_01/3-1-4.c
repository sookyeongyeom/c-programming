#include <stdio.h>

int main()
{
    int num1, num2;

    scanf("%d %d", &num1, &num2);
    printf("몫 = %d\n나머지 = %d", num1 / num2, num1 % num2);

    return 0;
}