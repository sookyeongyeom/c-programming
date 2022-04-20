#include <stdio.h>

struct employee
{
    char name[20];
    char id[20];
    int pay;
} user;

int main()
{
    printf("이름 = "), scanf("%s", user.name);
    printf("주민등록번호 = "), scanf("%s", user.id);
    printf("급여정보 = "), scanf("%d", &user.pay);

    printf("이름 = %s\n", user.name);
    printf("주민등록번호 = %s\n", user.id);
    printf("급여정보 = %d\n", user.pay);
    return 0;
}