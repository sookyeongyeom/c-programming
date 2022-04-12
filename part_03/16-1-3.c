#include <stdio.h>

int main()
{
    int arr[5][5], score, stu_sum, sub_sum, total_sum;
    char *student[] = {"철희", "철수", "영희", "영수"};
    char *subject[] = {"국어", "영어", "수학", "국사"};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%s의 %s 성적 = ", student[i], subject[j]), scanf("%d", &score);
            arr[i][j] = score;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        stu_sum = 0;
        sub_sum = 0;
        for (int j = 0; j < 4; j++)
        {
            stu_sum += arr[i][j];
            sub_sum += arr[j][i];
        }
        arr[i][4] = stu_sum;
        arr[4][i] = sub_sum;
        total_sum += stu_sum;
    }

    arr[4][4] = total_sum;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%3d ", arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}