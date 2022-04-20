#include <stdio.h>
#include <string.h>

struct person
{
    char name[20];
    char phoneNum[20];
    int age;
};

int main()
{
    struct person man1, man2;
    strcpy(man1.name, "염수경"); // name과 phoneNum은 배열이므로 문자열 저장을 위해서는 strcpy 함수를 호출해야 함
    strcpy(man1.phoneNum, "010-5461-0645");
    man1.age = 25;

    printf("이름 = "), scanf("%s", man2.name);
    printf("번호 = "), scanf("%s", man2.phoneNum);
    printf("나이 = "), scanf("%d", &(man2.age));

    printf("이름 = %s\n", man1.name);
    printf("번호 = %s\n", man1.phoneNum);
    printf("나이 = %d\n", man1.age);

    printf("이름 = %s\n", man2.name);
    printf("번호 = %s\n", man2.phoneNum);
    printf("나이 = %d\n", man2.age);
    return 0;
}