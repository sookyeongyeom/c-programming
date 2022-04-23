#include <stdio.h>
#include <stdlib.h>

char *ReadUserName(void)
{
    char *name = (char *)malloc(sizeof(char) * 30);
    printf("What's your name? = "), gets(name);
    return name;
}

int main()
{
    char *name1;
    char *name2;

    name1 = ReadUserName();
    printf("Name1 = %s\n", name1);
    name2 = ReadUserName();
    printf("Name2 = %s\n", name2);

    printf("Again Name1 = %s\n", name1);
    printf("Again Name2 = %s\n", name2);

    free(name1);
    free(name2);
    return 0;
}