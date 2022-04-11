#include <stdio.h>

int main()
{
    double *ptr2 = 0x0010;

    printf("%p\n", ptr2 + 2);

    return 0;
}