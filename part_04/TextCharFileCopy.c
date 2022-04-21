#include <stdio.h>

int main()
{
    FILE *src = fopen("src.txt", "rt");
    FILE *dest = fopen("dest.txt", "wt");
    int ch;

    if (!src || !dest)
    {
        puts("파일 오픈 실패!");
        return -1;
    }

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    if (feof(src)) // 파일의 끝에 도달한 경우 0이 아닌 값을 반환함
        puts("파일 복사 완료!");
    else
        puts("파일 복사 실패!");

    fclose(src);
    fclose(dest);
    return 0;
}