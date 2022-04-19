#include <stdio.h>

int main()
{
    int ch;

    ch = getchar();

    if (ch >= 65 && ch <= 90)
        ch += 32;
    else if (ch >= 97 && ch <= 122)
        ch -= 32;
    else
    {
        printf("알파벳이 아닙니다.");
        return 0;
    }

    putchar(ch);
    return 0;
}