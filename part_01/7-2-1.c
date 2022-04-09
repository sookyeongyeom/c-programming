#include <stdio.h>

int main()
{
    int many = 5, num, sum = 0;

    while (many > 0)
    {
        num = 0;
        while (num < 1)
        {
            printf("%d번째 정수를 입력하세요 (1 이상) = ", 6 - many), scanf("%d", &num);
        }
        sum += num;
        many--;
    }

    printf("모든 정수의 합 = %d", sum);

    return 0;
}