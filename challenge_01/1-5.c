#include <stdio.h>

int main()
{
    int cnt, prime, i, num = 2;

    for (cnt = 0; cnt < 10; num++)
    {
        prime = 0;
        for (i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                prime++;
            }
        }

        if (prime == 2)
        {
            printf("%d ", num);
            cnt++;
        }
    }

    return 0;
}