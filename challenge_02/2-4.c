#include <stdio.h>

int main()
{
    char s[10];
    int len, i, cnt;

    printf("문자열 입력 = "), scanf("%s", s);

    for (len = 0; s[len] != 0; len++)
        ;

    for (i = 0; i <= len / 2; i++)
    {
        if (s[i] == s[len - 1 - i])
            continue;
        else
            cnt += 1;
    }

    if (cnt == 0)
        printf("회문 입니다.");
    else
        printf("회문이 아닙니다.");

    return 0;
}