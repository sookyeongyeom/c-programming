#include <stdio.h>

void showArr(int (*arr)[5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%3d ", arr[i][j]);
        }

        printf("\n");
    }

    printf("\n");
}

int main()
{
    int arr[5][5] = {0};
    int(*ptr)[5];

    for (int i = 0; i < 5; i++)
    {
        arr[0][i] = i + 1;
        if (i > 0)
        {
            arr[i][4] = i + 5;
            arr[4][5 - i] = i + 10;
            arr[5 - i][0] = i + 15;
        }
    }
    showArr(arr);

    return 0;
}