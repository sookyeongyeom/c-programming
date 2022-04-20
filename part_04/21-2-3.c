#include <stdio.h>
#include <string.h>

void SplitInfo(char *str, char *name, char *age)
{
    int split = 0, j = 0;

    for (int i = 0; str[i] != 0; i++)
    {
        if (split)
        {
            age[j] = str[i];
            j++;
            continue;
        }
        if (str[i] == 32)
        {
            split = 1;
            continue;
        }
        name[i] = str[i];
    }
}

int main()
{
    char str1[50], name1[20] = {0}, age1[3] = {0};
    char str2[50], name2[20] = {0}, age2[3] = {0};

    printf("첫번째 사람 = "), gets(str1);
    printf("두번째 사람 = "), gets(str2);

    SplitInfo(str1, name1, age1);
    SplitInfo(str2, name2, age2);

    if (!strcmp(name1, name2))
    {
        printf("두 사람의 이름은 같습니다.");
    }
    else
    {
        printf("두 사람의 이름은 다릅니다.");
    }

    printf("\n");

    if (!strcmp(age1, age2))
    {
        printf("두 사람의 나이는 같습니다.");
    }
    else
    {
        printf("두 사람의 나이는 다릅니다.");
    }

    return 0;
}