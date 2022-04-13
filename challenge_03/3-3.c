#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int ran, cnt = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("난수 출력 = %d\n", rand() % 100);
    }

    // while (1)
    // {
    //     ran = rand();

    //     if (ran >= 0 && ran <= 99)
    //     {
    //         printf("난수 출력 = %d\n", ran);
    //         cnt++;
    //     }

    //     if (cnt == 5)
    //         break;
    // }

    return 0;
}