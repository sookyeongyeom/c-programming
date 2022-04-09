#include <stdio.h>

int main()
{
    int cur = 2, is;

    while (cur < 10)
    {
        if (cur % 2 != 0)
        {
            cur++;
            continue;
        }

        is = 1;
        while (is < 10)
        {
            if (is > cur)
                break;

            printf("%d * %d = %d\n", cur, is, cur * is);
            is++;
        }

        printf("\n");
        cur++;
    }
}