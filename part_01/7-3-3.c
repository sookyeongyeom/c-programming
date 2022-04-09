#include <stdio.h>

int main()
{
    int cur = 2, is;

    do
    {
        is = 1;
        do
        {
            printf("%d * %d = %d\n", cur, is, cur * is);
            is++;
        } while (is < 10);
        printf("\n");
        cur++;
    } while (cur < 10);

    return 0;
}