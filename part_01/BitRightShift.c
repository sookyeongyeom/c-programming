#include <stdio.h>

int main()
{
    int num = -16;

    printf("2칸 오른쪽 이동 = %d\n", num >> 2);
    printf("3칸 오른쪽 이동 = %d", num >> 3);

    return 0;
}