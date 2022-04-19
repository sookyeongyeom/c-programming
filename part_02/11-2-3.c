#include <stdio.h>

int main()
{
    char str[100];
    char max;

    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (!i)
        {
            max = str[i];
        }
        else
        {
            max = (int)max > (int)str[i] ? max : str[i];
        }
    }

    printf("Max = %c", max);

    return 0;
}