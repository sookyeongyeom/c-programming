#include <stdio.h>

int main()
{
    int circle, line = 5;

    while (line > 0)
    {
        circle = 5 - line;
        while (circle > 0)
        {
            printf("O");
            circle--;
        }
        printf("*\n");
        line--;
    }

    return 0;
}