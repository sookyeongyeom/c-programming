#include <stdio.h>

int main()
{
    // 파일 생성
    FILE *fp = fopen("move.txt", "wt");
    fputs("123456789", fp);
    fclose(fp);

    // 파일 개방
    fp = fopen("move.txt", "rt");

    // SEEK_END
    fseek(fp, -2, SEEK_END); // EOF → 9 → 8
    putchar(fgetc(fp));      // 8

    // SEEK_SET
    fseek(fp, 2, SEEK_SET); // 1 → 2 → 3
    putchar(fgetc(fp));     // 3이 출력되면서 파일 위치 지시자가 4로 옮겨감

    // SEEK_CUR
    fseek(fp, 2, SEEK_CUR); // 4 → 5 → 6
    putchar(fgetc(fp));     // 6
    putchar(fgetc(fp));     // 7

    fclose(fp);
    return 0;
}