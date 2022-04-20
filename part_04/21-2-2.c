#include <stdio.h>
#include <string.h>

int RemoveLine(char *str)
{
    int len = strlen(str); // 널 문자를 길이에 포함하지 않음
    str[len - 1] = 0;
}

int main()
{
    char str1[20], str2[20], str3[40];

    fgets(str1, 20, stdin);
    fgets(str2, 20, stdin);
    RemoveLine(str1);
    RemoveLine(str2);

    strcpy(str3, str1);
    strcat(str3, str2);

    puts(str3);

    return 0;
}