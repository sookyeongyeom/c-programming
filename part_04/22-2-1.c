#include <stdio.h>

struct employee
{
    char name[20];
    char id[20];
    int pay;
};

int main()
{
    struct employee arr[3];

    for (int i = 0; i < 3; i++)
    {
        printf("이름%d = ", i + 1), scanf("%s", &arr[i].name);
        printf("주민등록번호%d = ", i + 1), scanf("%s", &arr[i].id);
        printf("급여정보%d = ", i + 1), scanf("%d", &arr[i].pay);
    }

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("이름%d = %s\n", i + 1, arr[i].name);
        printf("주민등록번호%d = %s\n", i + 1, arr[i].id);
        printf("급여정보%d = %d\n", i + 1, arr[i].pay);
        printf("\n");
    }

    return 0;
}