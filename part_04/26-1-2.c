#include <stdio.h>
#define PI 3.14
#define AREA(R) ((R) * (R) * (PI))

int main()
{
    printf("원의 넓이 = %f", AREA(5));
    return 0;
}