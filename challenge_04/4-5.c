#include <stdio.h>

int main(int argc, char *argv[])
{
    char c1, c2;
    FILE *fp1 = fopen(argv[1], "rt");
    FILE *fp2 = fopen(argv[2], "rt");

    while (1)
    {
        c1 = fgetc(fp1);
        c2 = fgetc(fp2);

        if (c1 != c2)
        {
            printf("f1 = %c\n", c1);
            printf("f2 = %c\n", c2);
            printf("두 개의 파일은 일치하지 않습니다.");
            return 0;
        }

        if (c1 == EOF && c2 == EOF)
            break;
    }

    printf("두 개의 파일은 완전히 일치합니다.");
    return 0;
}