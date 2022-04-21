#include <stdio.h>

int main()
{
    // int cnt = 0;
    char data[10];
    FILE *fp = fopen("mystory.txt", "rt");
    if (!fp)
    {
        puts("파일 오픈 실패!");
        return -1;
    }

    while (fgets(data, sizeof(data), fp))
    {
        fputs(data, stdout); // puts()는 자동 개행됨
        // cnt++;
    }

    // printf("\nCount = %d", cnt);
    fclose(fp);
    return 0;
}