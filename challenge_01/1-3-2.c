// 유클리드 호제법으로 최대공약수 구하기

#include <stdio.h>

int GCD(int num1, int num2)
{
    int a, b, temp;

    a = num1 > num2 ? num1 : num2;
    b = num1 < num2 ? num1 : num2;

    while (a % b != 0)
    {
        temp = a;
        a = b;
        b = temp % b;
    }

    return b;
}

int main()
{
    int num1, num2;

    printf("두 개의 정수 = "), scanf("%d %d", &num1, &num2);
    printf("두 수의 최대공약수 = %d", GCD(num1, num2));

    return 0;
}