#include <stdio.h>

int GCD(int num1, int num2)
{
    int i = 1, last = 1;

    while (i <= num1 && i <= num2)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            last = i;
        }
        i++;
    }

    return last;
}

int main()
{
    int num1, num2;

    printf("두 개의 정수 = "), scanf("%d %d", &num1, &num2);
    printf("두 수의 최대공약수 = %d", GCD(num1, num2));

    return 0;
}