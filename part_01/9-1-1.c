#include <stdio.h>

int Max(int num1, int num2, int num3)
{
    int max;
    max = num1 > num2 ? num1 : num2;
    max = max > num3 ? max : num3;
    return max;
}

int Min(int num1, int num2, int num3)
{
    int min;
    min = num1 < num2 ? num1 : num2;
    min = min < num3 ? min : num3;
    return min;
}

int main()
{
    int num1, num2, num3;

    printf("세 개의 정수 입력 = "), scanf("%d %d %d", &num1, &num2, &num3);
    printf("가장 큰 수는 %d입니다.\n", Max(num1, num2, num3));
    printf("가장 작은 수는 %d입니다.", Min(num1, num2, num3));
}