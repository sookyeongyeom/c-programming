#include <stdio.h>

int main()
{
    char data[100];
    FILE *fp = fopen("mystory.txt", "wt");
    if (!fp)
    {
        puts("파일 생성 실패!");
        return -1;
    }

    // 이름 저장
    fputs("#이름: ", fp);
    printf("이름 = "), scanf("%s", data);
    fputs(data, fp);

    // 주민번호 저장
    fputs("\n#주민번호: ", fp);
    printf("주민번호 = "), scanf("%s", data);
    fputs(data, fp);

    // 전화번호 저장
    fputs("\n#전화번호: ", fp);
    printf("전화번호 = "), scanf("%s", data);
    fputs(data, fp);

    fclose(fp);
    return 0;
}