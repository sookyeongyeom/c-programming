#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr1 = (int *)malloc(sizeof(int)); // 실패 시 NULL 반환
    int *ptr2 = (int *)malloc(sizeof(int) * 7);

    *ptr1 = 20;
    for (int i = 0; i < 7; i++)
        ptr2[i] = i + 1;

    printf("%d\n", *ptr1);
    for (int i = 0; i < 7; i++)
        printf("%d ", ptr2[i]);

    free(ptr1);
    free(ptr2);
    return 0;
}