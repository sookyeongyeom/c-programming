#include <stdio.h>

void ComplexFuncOne(int **ptr1, int *(*ptr2)[5])
{
    printf("arr1 = %p, arr2 = %p\n", ptr1, ptr2);
}

void ComplexFuncTwo(int ***ptr3, int ***(*ptr4)[5])
{
    printf("arr3 = %p, arr4 = %p\n", ptr3, ptr4);
}

int main()
{
    int *arr1[3];
    int *arr2[3][5];
    int **arr3[5];
    int ***arr4[3][5];

    printf("arr1 = %p, arr2 = %p, arr3 = %p, arr4 = %p\n", arr1, arr2, arr3, arr4);

    ComplexFuncOne(arr1, arr2);
    ComplexFuncTwo(arr3, arr4);

    return 0;
}