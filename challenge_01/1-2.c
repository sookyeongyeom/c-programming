#include <stdio.h>

void GuGuDan(int num1, int num2)
{
    int start, end, cur, is;

    start = num1 < num2 ? num1 : num2;
    end = num1 > num2 ? num1 : num2;

    for (cur = start; cur < end + 1; cur++)
    {
        for (is = 1; is < 10; is++)
        {
            printf("%d * %d = %d\n", cur, is, cur * is);
        }

        printf("\n");
    }
}

int main()
{
    int num1, num2;

    printf("두 개의 정수 = "), scanf("%d %d", &num1, &num2);
    GuGuDan(num1, num2);

    return 0;
}