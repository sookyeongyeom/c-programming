#include <stdio.h>

int main()
{
    int *arr1[5];    // 1차원 포인터 배열
    int *arr2[3][5]; // 2차원 포인터 배열
    int **ptr1;      // 주소를 담아야하고, 포인터 단위로 읽어야함. int형 1차원 배열을 가리키는 포인터==int * ptr
    int *(*ptr2)[5]; // 주소를 담아야하고, 가로길이 5 단위로 읽어야함. int형 2차원 배열을 가리키는 포인터==int (*ptr)[n]

    ptr1 = arr1;
    ptr2 = arr2;

    printf("%p %p\n", ptr1, arr1);
    printf("%p %p\n", ptr2, arr2);

    return 0;
}