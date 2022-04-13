#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int ran, cnt = 0;
    srand(time(NULL));

    while (1)
    {
        ran = rand() % 7;

        if (ran)
        {
            cnt++;
            printf("주사위 %d의 결과 = %d\n", cnt, ran);
        }

        if (cnt == 2)
            break;
    }

    return 0;
}