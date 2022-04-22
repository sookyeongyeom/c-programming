#include <stdio.h>

int main()
{
    long fpos;

    // 파일 생성
    FILE *fp = fopen("tell.txt", "wt");
    fputs("1234-", fp);
    fclose(fp);

    // 파일 개방
    fp = fopen("tell.txt", "rt");

    for (int i = 0; i < 4; i++)
    {
        putchar(fgetc(fp));
        fpos = ftell(fp); // 인덱스 0부터 시작함
        fseek(fp, -1, SEEK_END);
        putchar(fgetc(fp));
        fseek(fp, fpos, SEEK_SET); // 첫번째 자리부터 이동하므로 인덱스와 이동거리가 맞아떨어짐
    }

    fclose(fp);
    return 0;
}