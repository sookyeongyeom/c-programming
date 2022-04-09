#include <stdio.h>

void Fibo(int many)
{
    int i, first = 0, second = 1, next;

    for (i = 0; i < many; i++)
    {
        switch (i)
        {
        case 0:
            printf("0 ");
            break;
        case 1:
            printf("1 ");
            break;
        default:
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
    }
}

int main()
{
    int many;

    printf("몇 개의 피보나치 수열을 출력할까요? = "), scanf("%d", &many);
    Fibo(many);

    return 0;
}