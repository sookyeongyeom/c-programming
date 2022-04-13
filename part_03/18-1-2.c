#include <stdio.h>

void SimpleFuncOne(int *arr1, int *arr2)
{
    printf("arr1 = %p, arr2 = %p\n", arr1, arr2);
}

void SimpleFuncTwo(int (*arr3)[4], int (*arr4)[4])
{
    printf("arr3 = %p, arr4 = %p\n", arr3, arr4);
}

int main()
{
    int arr1[3];
    int arr2[4];
    int arr3[3][4];
    int arr4[2][4];

    printf("arr1 = %p, arr2 = %p, arr3 = %p, arr4 = %p\n", arr1, arr2, arr3, arr4);

    SimpleFuncOne(arr1, arr2);
    SimpleFuncTwo(arr3, arr4);

    return 0;
}
