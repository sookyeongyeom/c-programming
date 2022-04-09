#include <stdio.h>

int main()
{
    int num, sum = 0;

    while (num != 0)
    {
        printf("정수 = "), scanf("%d", &num);
        sum += num;
    }

    printf("모든 정수의 합 = %d", sum);

    return 0;
}