#include <stdio.h>

int main()
{
    char str[100], temp;
    int len = 0;

    scanf("%s", str);
    printf("Origin = %s\n", str);

    while (str[len] != '\0')
    {
        len++;
    }
    printf("Length (w/o NULL) = %d\n", len);

    for (int i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    // 출력
    printf("%s", str);

    return 0;
}