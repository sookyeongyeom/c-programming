#include <stdio.h>

int main()
{
    int i = 0, j = 0, num1, num2;

    while (i < 10)
    {
        while (j < 10)
        {
            num1 = (i * 10) + j;
            num2 = i + (j * 10);

            if (num1 + num2 == 99)
            {
                printf("%d + %d = 99입니다!\n", num1, num2);
            }

            j++;
        }

        j = 0;
        i++;
    }
}