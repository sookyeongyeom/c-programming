#include <stdio.h>

int Odd(int *arr)
{
    int i;

    printf("홀수 출력 = ");

    for (i = 0; i < 10; i++)
        if (arr[i] % 2 != 0)
            printf("%d ", arr[i]);
}

int Even(int *arr)
{
    int i;

    printf("짝수 출력 = ");

    for (i = 0; i < 10; i++)
        if (arr[i] % 2 == 0)
            printf("%d ", arr[i]);
}

int main()
{
    int i, arr[10];

    for (i = 0; i < 10; i++)
        printf("입력 = "), scanf("%d", &arr[i]); // scanf에는 & 연산 해주어야함

    Odd(arr); // 배열의 이름은 그 자체로 주소값이기 때문에 & 연산 해줄 필요 없음
    printf("\n");
    Even(arr);

    return 0;
}