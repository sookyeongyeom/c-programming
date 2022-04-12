#include <stdio.h>

int main()
{
    int num, arr[10], i;
    int *front = arr, *back = &arr[9];

    for (i = 0; i < 10; i++)
    {
        printf("입력 = "), scanf("%d", &num);
        if (num % 2 != 0)
        {
            *front = num;
            front++;
        }
        else
        {
            *back = num;
            back--;
        }
    }

    printf("배열 요소의 출력 = ");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}