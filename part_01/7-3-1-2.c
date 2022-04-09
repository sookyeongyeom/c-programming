#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("정수 입력 (0 to quit) = "), scanf("%d", &num);
    sum += num;

    while (num != 0)
    {
        printf("정수 입력 (0 to quit) = "), scanf("%d", &num);
        sum += num;
    }

    printf("모든 정수의 합 = %d", sum);

    return 0;
}