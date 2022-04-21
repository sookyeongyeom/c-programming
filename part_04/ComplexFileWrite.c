#include <stdio.h>

int main()
{
    char name[10];
    char sex;
    int age;
    FILE *fp = fopen("friend.txt", "wt");

    for (int i = 0; i < 3; i++)
    {
        printf("Name Sex Age = "), scanf("%s %c %d", name, &sex, &age);
        getchar(); // 입력 버퍼 비우기 (\n)
        fprintf(fp, "%s %c %d\n", name, sex, age);
    }

    fclose(fp);
    return 0;
}