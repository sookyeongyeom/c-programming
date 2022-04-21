#include <stdio.h>

typedef struct
{
    unsigned short upper;
    unsigned short lower;
} DBShort;

typedef union
{
    int iBuf;
    char bBuf[4];
    DBShort sBuf; // sBuf의 사이즈는 2+2=4이므로 멤버 하나당 수평으로 반씩 할당됨. DBShort로 분리하지 않고 RDBuf에 정의하면 수평으로 나뉘지 않고 상위 2바이트를 동일하게 참조하게 됨.
} RDBuf;

int main()
{
    RDBuf buf;

    printf("상위 2바이트 = %u\n", buf.sBuf.upper);
    printf("하위 2바이트 = %u\n", buf.sBuf.lower);
    printf("상위 1바이트 아스키 코드 = %c\n", buf.bBuf[0]);
    printf("하위 1바이트 아스키 코드 = %c\n", buf.bBuf[3]);

    return 0;
}
