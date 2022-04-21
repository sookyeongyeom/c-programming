#include <stdio.h>

int main()
{
    char data[100];
    FILE *fp = fopen("mystory.txt", "at");
    if (!fp)
    {
        puts("파일 오픈 실패!");
        return -1;
    }

    // 즐겨먹는 음식 추가
    fputs("\n#즐겨먹는 음식: ", fp);
    printf("즐겨먹는 음식 = "), scanf("%s", data);
    fputs(data, fp);

    // 취미 추가
    fputs("\n#취미: ", fp);
    printf("취미 = "), scanf("%s", data);
    fputs(data, fp);

    fclose(fp);
    return 0;
}