#include <stdio.h>

int main()
{
    int dan, num = 9;

    printf("몇 단? = "), scanf("%d", &dan);

    while (num > 0)
    {
        printf("%d * %d = %d\n", dan, num, dan * num);
        num--;
    }
}