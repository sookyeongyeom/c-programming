#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};
typedef struct point Point;

typedef struct person // typedef 사용 시 구조체 이름 person은 생략 가능함. 다만 이 경우 struct person man과 같은 선언은 불가능함.
{
    char name[20];
    char phoneNum[20];
    int age;
} Person;

int main()
{
    Point pos = {10, 20};
    Person man = {"염수경", "010-5461-0645", 25}; // 초기화 과정에서는 strcpy 함수를 호출할 필요 없음
    printf("%d %d\n", pos.xpos, pos.ypos);
    printf("%s %s %d\n", man.name, man.phoneNum, man.age);
    return 0;
}