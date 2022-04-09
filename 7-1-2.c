#include <stdio.h>

int main()
{
    int num, mul = 1;

    printf("양의 정수 = "), scanf("%d", &num);

    while (num > 0)
    {
        printf("%d ", 3 * mul++);
        num--;
    }

    return 0;
}