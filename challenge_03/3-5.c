#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numP, numC, win = 0, draw = 0, lose = 0;
    char *arr[] = {"바위", "가위", "보"};
    srand(time(NULL));

    while (1)
    {
        printf("바위는 1, 가위는 2, 보는 3 = "), scanf("%d", &numP);

        while (1)
        {
            numC = rand() % 4;
            if (numC)
                break;
        }

        printf("당신은 %s 선택, 컴퓨터는 %s 선택, ", arr[numP - 1], arr[numC - 1]);

        if (numP == numC)
        {
            printf("비겼습니다!\n\n");
            draw++;
            continue;
        }

        switch (numP)
        {
        case 1:
            switch (numC)
            {
            case 2:
                printf("당신이 이겼습니다!");
                win++;
                break;
            case 3:
                printf("당신이 졌습니다!");
                lose++;
                break;
            }
            break;

        case 2:
            switch (numC)
            {
            case 1:
                printf("당신이 졌습니다!");
                lose++;
                break;
            case 3:
                printf("당신이 이겼습니다!");
                win++;
                break;
            }
            break;

        case 3:
            switch (numC)
            {
            case 1:
                printf("당신이 이겼습니다!");
                win++;
                break;
            case 2:
                printf("당신이 졌습니다!");
                lose++;
                break;
            }
            break;
        }

        printf("\n\n");

        if (lose)
        {
            printf("게임의 결과 = %d승 %d무", win, draw);
            break;
        }
    }
}