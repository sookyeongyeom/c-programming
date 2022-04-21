#include <stdio.h>

int main()
{
    FILE *src = fopen("src.txt", "rt");
    FILE *dest = fopen("dest.txt", "wt");
    char str[20];

    if (!src || !dest)
    {
        puts("파일 오픈 실패!");
        return -1;
    }

    while (fgets(str, sizeof(str), src))
        fputs(str, dest);

    if (feof(src))
        puts("파일 복사 완료!");
    else
        puts("파일 복사 실패!");

    fclose(src);
    fclose(dest);
    return 0;
}