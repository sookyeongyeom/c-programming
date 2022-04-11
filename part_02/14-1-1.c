#include <stdio.h>

int SquareByValue(int num)
{
    return num *= num;
}

int SquareByReference(int *num)
{
    return *num *= *num;
}

int main()
{
    int num1 = 10, num2 = 20;
    int *num2_ptr = &num2;

    printf("복사하여 제곱한 경우 반환값 = %d\n", SquareByValue(num1));
    printf("복사하여 제곱한 경우 원래값 = %d\n", num1);

    printf("참조하여 제곱한 경우 반환값 = %d\n", SquareByReference(num2_ptr));
    printf("참조하여 제곱한 경우 원래값 = %d", num2);

    return 0;
}