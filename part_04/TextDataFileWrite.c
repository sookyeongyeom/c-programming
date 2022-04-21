#include <stdio.h>

int main()
{
    FILE *fp = fopen("simple.txt", "wt");
    if (!fp)
    {
        puts("파일 오픈 실패!");
        return -1;
    }

    fputc('A', fp);
    fputc('B', fp);
    fputs("My name is Choco !\n", fp);
    fputs("Your name is Gom !\n", fp);
    fclose(fp);
    return 0;
}