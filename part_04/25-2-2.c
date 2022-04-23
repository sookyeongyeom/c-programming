#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = (int *)malloc(sizeof(int) * 5);
    int n, i = 0, size = 5;

    while (1)
    {
        printf("%d번째 정수 입력 = ", i + 1), scanf("%d", &n);
        if (n == -1)
            break;

        if (i + 1 == size)
            arr = (int *)realloc(arr, sizeof(int) * (size + 3)); // 쓰레기값으로 초기화됨

        arr[i] = n;
        i++;
    }

    for (int j = 0; j < i; j++) // -1 직전까지
        printf("%d ", arr[j]);

    free(arr);
    return 0;
}