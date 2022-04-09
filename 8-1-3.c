#include <stdio.h>

int main()
{
    int kor, eng, math;
    double average;

    printf("국어, 영어, 수학 = "), scanf("%d %d %d", &kor, &eng, &math);
    average = (kor + eng + math) / (double)3;

    printf("평균 = %f\n", average);

    if (average >= 90)
        printf("A!");
    else if (average >= 80)
        printf("B!");
    else if (average >= 70)
        printf("C!");
    else if (average >= 50)
        printf("D!");
    else
        printf("F!");

    return 0;
}