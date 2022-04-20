#include <stdio.h>

void ClearLineFromReadBuffer()
{
    while (getchar() != '\n') // 입력 버퍼에 저장된 문자들은 읽어들이면 지워진다. 조건을 검증하기 위해 getchar()가 계속 실행되며, \n을 읽으면 다음 반복을 실행하지 않는다.
        ;
}

int main()
{
    char perID[7];
    char name[10];

    fputs("주민번호 앞 6자리 입력 = ", stdout);
    fgets(perID, sizeof(perID), stdin);
    ClearLineFromReadBuffer(); // 입력 버퍼 비우기

    fputs("이름 입력 = ", stdout);
    fgets(name, sizeof(name), stdin);

    printf("주민번호 = %s\n", perID);
    printf("이름 = %s\n", name);
    return 0;
}