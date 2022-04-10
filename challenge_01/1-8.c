#include <stdio.h>

int Reculsive(int n)
{
    if (!n)
        return 1;
    else
        return 2 * Reculsive(n - 1);
}

int main()
{
    int num;

    printf("정수 입력 = "), scanf("%d", &num);
    printf("2의 %d승은 %d", num, Reculsive(num));

    return 0;
}