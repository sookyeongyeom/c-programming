#include <stdio.h>

int main()
{
    int num1 = 10, num2 = 20;
    int *ptr1 = &num1, *ptr2 = &num2, *temp;

    *ptr1 += 10; // num1 20됨
    *ptr2 -= 10; // num2 10됨

    // ptr1 = &num2;
    // ptr2 = &num1;

    temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;

    printf("%d\n", *ptr1); // 10
    printf("%d", *ptr2);   // 20

    return 0;
}