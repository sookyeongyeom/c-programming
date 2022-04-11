#include <stdio.h>

int Swap3(int *ptr1, int *ptr2, int *ptr3)
{
    int temp;

    temp = *ptr3;
    *ptr3 = *ptr2;
    *ptr2 = *ptr1;
    *ptr1 = temp;

    return 0;
}

int main()
{
    int num1 = 1, num2 = 2, num3 = 3;

    Swap3(&num1, &num2, &num3);
    printf("%d %d %d", num1, num2, num3);

    return 0;
}