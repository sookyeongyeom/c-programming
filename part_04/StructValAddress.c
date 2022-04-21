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
    struct person man = {"염수경", "010-5461-0645", 26};

    printf("%p %p\n", &pos, &pos.xpos);
    printf("%p %p\n", &man, &man.name);

    return 0;
}