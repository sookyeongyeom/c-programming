#include <stdio.h>
#include <stdlib.h>

char *ReadLine(int max)
{
    char *str = (char *)malloc(sizeof(char) * max);

    printf("문자열 입력 = "), gets(str); // scanf는 공백 포함 문자열 못받음

    return str;
}

void PutBackward(char *str)
{
    int len; // 문자열의 실제 길이. strlen() 쓰면 되는데 깜빡함

    for (len = 0; str[len] != 0; len++)
        ;

    int end = len - 1; // 마지막 인덱스

    for (int i = len - 1; i >= 0; i--)
    {
        if (str[i] == 32) // 공백을 만나면
        {
            for (int j = i + 1; j <= end; j++) // 공백 다음부터 마지막 인덱스까지 출력
                printf("%c", str[j]);
            printf(" ");
            end = i - 1; // 마지막 인덱스를 공백 위치-1로 변경
        }
        if (!i) // 문자열의 첫 지점을 만나면
        {
            for (int k = 0; k <= end; k++) // 처음부터 마지막 인덱스까지 출력
                printf("%c", str[k]);
        }
    }

    // 다른 방법 (책 답안)
    // 문자열을 %s로 출력할 시 시작 주소부터 널 문자 직전까지 인식하여 출력하므로
    // 공백을 만나면 해당 위치에 널 문자를 삽입하여 문자열을 잘라주고
    // 공백+1 위치부터 %s로 출력하면 공백 뒤쪽에 위치한 단어가 출력된다.
    // printf("%s ", &str[i+1]);
    // 첫 지점에 다다랐을 때도 printf("%s", &str[0]); 해주면 끝
}

int main()
{
    int max; // 문자열의 최대 길이
    char *str;

    printf("문자열의 길이 = "), scanf("%d", &max);
    getchar(); // gets() 사용을 위해 입력 버퍼에 남은 \n 비워주기
    str = ReadLine(max);
    PutBackward(str);

    free(str);
    return 0;
}