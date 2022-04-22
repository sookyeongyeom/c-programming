#include <stdio.h>

int GetFileSize(FILE *fp)
{
    int size = 0, first_pos = ftell(fp);
    int end_pos;

    // 파일 크기 계산
    fseek(fp, -1, SEEK_END);
    end_pos = ftell(fp);
    size = end_pos + 1;

    // 파일 위치 지시자 정보 복원
    fseek(fp, first_pos, SEEK_SET);

    return size;
}

int main()
{
    FILE *fp = fopen("tell.txt", "rt");

    printf("File Size = %d Bytes", GetFileSize(fp));

    fclose(fp);
    return 0;
}