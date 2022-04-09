#include <stdio.h>

int AddToTotal(int num)
{
    static int total = 0;
    total += num;
    return total;
}

int main()
{
    int num, i;

    for (i = 0; i < 3; i++)
    {
        printf("%d번째 입력 : ", i + 1);
        scanf("%d", &num);
        printf("누적: %d\n", AddToTotal(num));
    }

    return 0;
}