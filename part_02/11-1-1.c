#include <stdio.h>

int main()
{
    int arr[5];
    int max, min, sum = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);

        if (!i)
        {
            max = arr[i];
            min = arr[i];
        }
        else
        {
            // 최댓값
            max = arr[i] > max ? arr[i] : max;
            // 최솟값
            min = arr[i] < min ? arr[i] : min;
        }

        // 총 합
        sum += arr[i];
    }

    // 배열 출력
    printf("배열 출력 = ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    printf("Sum = %d\n", sum);

    return 0;
}