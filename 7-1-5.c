#include <stdio.h>

int main()
{
    int many, num, sum = 0, temp;
    double average;

    printf("몇 개의 정수를 입력하실건가요? = "), scanf("%d", &many);

    temp = many;

    while (many > 0)
    {
        printf("입력하세요 = "), scanf("%d", &num);
        sum += num;
        many--;
    }

    average = (double)sum / temp;
    printf("입력한 숫자의 평균은 %f입니다.", average);

    return 0;
}