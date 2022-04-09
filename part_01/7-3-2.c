#include <stdio.h>

int main()
{
    int num = 0, sum = 0;

    do
    {
        sum += num * 2;
        num++;
    } while (num * 2 <= 100);

    printf("%d", sum);

    return 0;
}