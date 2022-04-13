#include <stdio.h>

void RotateArr(int (*arr)[4], int num)
{
    int *a, *b, *c, *d, tempA, tempB, tempC, tempD;

    while (num > 0)
    {
        // 테두리 90도 회전
        for (int i = 0; i < 3; i++)
        {
            a = &arr[0][i];
            b = &arr[i][3];
            c = &arr[3][3 - i];
            d = &arr[3 - i][0];

            tempA = *a;
            tempB = *b;
            tempC = *c;
            tempD = *d;

            *b = tempA;
            *c = tempB;
            *d = tempC;
            *a = tempD;
        }

        // 내부 90도 회전
        a = &arr[1][1];
        b = &arr[1][2];
        c = &arr[2][2];
        d = &arr[2][1];

        tempA = *a;
        tempB = *b;
        tempC = *c;
        tempD = *d;

        *b = tempA;
        *c = tempB;
        *d = tempC;
        *a = tempD;

        num--;
    }
}

void showArr(int (*arr)[4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%3d ", arr[i][j]);
        }

        printf("\n");
    }

    printf("\n");
}

int main()
{
    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    showArr(arr);

    RotateArr(arr, 1);
    showArr(arr);

    RotateArr(arr, 1);
    showArr(arr);

    RotateArr(arr, 1);
    showArr(arr);

    return 0;
}