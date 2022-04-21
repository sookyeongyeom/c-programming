#include <stdio.h>

int main()
{
    char name[10];
    char sex;
    int age;
    FILE *fp = fopen("friend.txt", "rt");
    int end;

    while (1)
    {
        end = fscanf(fp, "%s %c %d", name, &sex, &age); // 끝났거나 오류가 발생하면 EOF 반환
        if (end == EOF)
            break;
        printf("%s %c %d\n", name, sex, age);
    }

    fclose(fp);
    return 0;
}