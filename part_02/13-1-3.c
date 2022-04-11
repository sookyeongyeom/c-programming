#include <stdio.h>

int main()
{
    int sum = 0, arr[5] = {1, 2, 3, 4, 5};
    int *ptr = &arr[4];

    sum += *ptr;   // *ptr = arr[5]
    sum += *--ptr; // *ptr = arr[4]
    sum += *--ptr; // *ptr = arr[3]
    sum += *--ptr; // *ptr = arr[2]
    sum += *--ptr; // *ptr = arr[1]

    printf("%d\n", sum);
    printf("*ptr = %d", *ptr); // 1

    return 0;
}