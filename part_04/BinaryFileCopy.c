#include <stdio.h>

int main()
{
    FILE *src = fopen("video_src.bin", "rb"); // 음원, 이미지, 영상 등 바이너리 데이터 다 됨
    FILE *dest = fopen("video_dest.bin", "wb");
    char buf[20];
    int readCnt;

    if (!src || !dest)
    {
        puts("파일 오픈 실패!");
        return -1;
    }

    while (1) // buf 크기만큼 쪼개서 복사한다고 생각하면 됨. 20만큼 옮기고 옮기고 옮기고 반복
    {
        readCnt = fread((void *)buf, 1, sizeof(buf), src);

        if (readCnt < sizeof(buf)) // 옮겨진 양이 20 미만 = 마지막 끄트머리 = feof()로 확인해서 EOF면 복사 완료된 것
        {
            if (feof(src))
            {
                fwrite((void *)buf, 1, readCnt, dest); // 마지막 끄트머리 복사해주기
                puts("파일 복사 완료!");
            }
            else
                puts("파일 복사 실패!");

            break;
        }

        fwrite((void *)buf, 1, sizeof(buf), dest); // 옯겨진 양이 20 = 쪼개서 옮기는 중이므로 조용히 복사해주면 됨
    }

    fclose(src);
    fclose(dest);
    return 0;
}