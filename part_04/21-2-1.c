#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[50];
    int sum = 0;

    gets(str);

    for (int i = 0; str[i] != 0; i++)
    {
        if (48 <= str[i] && 57 >= str[i])
        {
            sum += str[i] - 48;
        }
    }

    printf("숫자의 총 합 = %d", sum);

    return 0;
}