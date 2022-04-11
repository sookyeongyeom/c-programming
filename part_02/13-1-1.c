#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    *ptr += 2;   // *ptr = arr[0] += 2
    *++ptr += 2; // *ptr = arr[1] += 2
    *++ptr += 2; // *ptr = arr[2] += 2
    *++ptr += 2; // *ptr = arr[3] += 2
    *++ptr += 2; // *ptr = arr[4] += 2

    printf("%d\n", arr[0]); // 3
    printf("%d\n", arr[1]); // 4
    printf("%d\n", arr[2]); // 5
    printf("%d\n", arr[3]); // 6
    printf("%d\n", arr[4]); // 7

    printf("*ptr = %d\n", *ptr); // 7

    return 0;
}