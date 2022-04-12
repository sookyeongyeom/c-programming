#include <stdio.h>

int DesSort(int *arr)
{
    int *ptr;
    int i, j, temp;

    for (j = 6; j > 0; j--)
    {
        ptr = &arr[6];

        for (i = 0; i < j; i++)
        {
            if (*ptr > *(ptr - 1))
            {
                temp = *(ptr - 1);
                *(ptr - 1) = *ptr;
                *ptr = temp;

                ptr--;
            }
        }
    }
}

int main()
{
    int arr[7], i;

    for (i = 0; i < 7; i++)
    {
        printf("입력 = "), scanf("%d", &arr[i]);
    }

    DesSort(arr);

    for (i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}