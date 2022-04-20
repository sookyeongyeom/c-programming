#include <stdio.h>

struct person
{
    char name[20];
    char phoneNum[20];
    int age;
};

int main()
{
    struct person arr[3] = {
        {"염수경", "010-5461-0645", 25},
        {"염수연", "010-4983-7173", 22},
        {"박민규", "010-7561-0645", 26}};

    for (int i = 0; i < 3; i++)
        printf("%s %s %d\n", arr[i].name, arr[i].phoneNum, arr[i].age);

    return 0;
}