#include <stdio.h>

int main()
{
    int num, k = 0, mul = 1;

    printf("상수 n 입력 = "), scanf("%d", &num);

    while (mul <= num)
    {
        mul *= 2;
        k++;
    }

    printf("공식을 만족하는 k의 최댓값 = %d", k - 1);

    return 0;
}