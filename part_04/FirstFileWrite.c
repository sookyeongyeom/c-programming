#include <stdio.h>

int main()
{
    FILE *fp = fopen("data.txt", "wt");
    if (fp == NULL)
    {
        puts("파일 오픈 실패!");
        return -1;
    }
    fputc('A', fp);
    fputc('B', fp);
    fputc('C', fp);
    fclose(fp); // 스트림 종료
    return 0;
}