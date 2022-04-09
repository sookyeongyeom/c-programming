#include <stdio.h>

int main()
{
    int num;

    scanf("%d", &num);
    printf("Result = %d", ~num + 1);

    return 0;
}