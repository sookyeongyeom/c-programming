#include <stdio.h>

void Binary(int num)
{
    if (num != 0)
    {
        Binary(num / 2);
    }

    printf("%d", num % 2);
}

int main()
{
    int num;

    printf("10진수 정수 입력 = "), scanf("%d", &num);

    Binary(num);

    return 0;
}

// 나열한 것을 뒤에서부터 출력하고 싶을 때는 재귀함수를 사용한다.