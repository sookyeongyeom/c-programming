extern void Increment();
extern int GetNum();

#include <stdio.h>

int main()
{
    printf("Num = %d\n", GetNum());
    Increment();
    printf("Num = %d\n", GetNum());
    Increment();
    printf("Num = %d\n", GetNum());
    return 0;
}