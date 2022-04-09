#include <stdio.h>

int main()
{
    int num;

    printf("양의 정수 : "), scanf("%d", &num);

    while (num > 0)
    {
        printf("Hello world!\n");
        num--;
    }

    return 0;
}