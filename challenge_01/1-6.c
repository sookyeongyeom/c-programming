#include <stdio.h>

int main()
{
    int sec, min, hour;

    printf("초 = "), scanf("%d", &sec);

    min = sec / 60;
    sec %= 60;

    hour = min / 60;
    min %= 60;

    printf("%dh %dmin %dsec", hour, min, sec);

    return 0;
}