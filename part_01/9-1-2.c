#include <stdio.h>

double CelToFah(double temp)
{
    return temp * 1.8 + 32;
}

double FahToCel(double temp)
{
    return (temp - 32) / 1.8;
}

int main()
{
    double temp1, temp2;

    printf("섭씨 온도 = "), scanf("%lf", &temp1);
    printf("섭씨 → 화씨 = %f\n", CelToFah(temp1));

    printf("화씨 온도 = "), scanf("%lf", &temp2);
    printf("화씨 → 섭씨 = %f", FahToCel(temp2));

    return 0;
}