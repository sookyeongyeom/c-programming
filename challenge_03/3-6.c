#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int ans[3];
    int try[3];
    int ran, i = 0, again = 0;
    int n1, n2, n3, strike = 0, ball = 0;
    int game = 1;
    srand(time(NULL));

    // 정답 세팅
    while (1)
    {
        ran = rand() % 10;

        // 중복 확인
        for (int j = 0; j < 3; j++)
        {
            if (ran == ans[i])
            {
                again++;
                break;
            }
        }
        if (again)
        {
            again = 0; // 카운트 리셋
            continue;
        }

        // 중복 아니면
        ans[i] = ran;
        i++;

        // 세팅 완료
        if (i == 3)
        {
            printf("Start Game!\n\n");
            break;
        }
    }

    // 플레이 시작
    while (1)
    {

        printf("3개의 숫자 선택 = "), scanf("%d %d %d", &try[0], &try[1], &try[2]);

        // strike 확인
        for (i = 0; i < 3; i++)
        {
            if (try[i] == ans[i])
                strike++;
        }

        // ball 확인
        for (i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (!strike && try[i] == ans[j])
                    ball++;
            }
        }

        printf("%d번째 도전 결과 = %dstrike, %dball!\n\n", game, strike, ball);

        if (strike == 3)
        {
            printf("%d번째 도전만에 3strike에 성공했습니다!", game);
            break;
        }

        strike = 0;
        ball = 0;
        game++;
    }
}