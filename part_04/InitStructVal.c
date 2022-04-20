#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};

struct person
{
    char name[20];
    char phoneNum[20];
    int age;
};

int main()
{
    struct point pos = {10, 20};
    struct person man = {"염수경", "010-5461-0645", 25}; // 초기화 과정에서는 strcpy 함수를 호출할 필요 없음
    printf("%d %d\n", pos.xpos, pos.ypos);
    printf("%s %s %d\n", man.name, man.phoneNum, man.age);
    return 0;
}