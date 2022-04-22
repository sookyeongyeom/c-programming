#include <stdio.h>

typedef struct
{
    char name[10];
    char sex;
    int age;
} Friend;

int main()
{
    FILE *fp;
    Friend myfr1;
    Friend myfr2;

    // 파일 쓰기
    fp = fopen("friend.bin", "wb");
    printf("Name Sex Age = "), scanf("%s %c %d", myfr1.name, &myfr1.sex, &myfr1.age);
    fwrite((void *)&myfr1, sizeof(myfr1), 1, fp); // 구조체 변수의 이름은 구조체 변수의 주소가 아니므로 (구조체 변수의 첫번째 멤버의 주소임) &myfr1로 주소를 추출한다.
    fclose(fp);

    // 파일 읽기
    fp = fopen("friend.bin", "rb");
    fread((void *)&myfr2, sizeof(myfr2), 1, fp);
    printf("%s %c %d", myfr2.name, myfr2.sex, myfr2.age);

    fclose(fp);
    return 0;
}