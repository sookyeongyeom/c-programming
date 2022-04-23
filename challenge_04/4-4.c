#include <stdio.h>

int main(int argc, char *argv[])
{
    int a = 0, p = 0;
    char word[30];
    FILE *fp = fopen(argv[1], "rt");

    while (1)
    {
        printf("첫 = %d\n", ftell(fp));
        fscanf(fp, "%s", &word);
        printf("스캔 후 = %d\n", ftell(fp)); // 단어 스캔 후 공백 위치로 이동
        if (word[0] == 'A')
            a++;
        if (word[0] == 'P')
            p++;
        if (fgetc(fp) == EOF) // fgetc()로 인해 한 칸 진전 (공백 다음 위치로 이동)
            break;
        fseek(fp, -1, SEEK_CUR); // 한 칸 전으로 다시 밀어줌
        printf("대조 후 = %d\n", ftell(fp));
    }

    printf("A로 시작하는 단어의 수 = %d\n", a);
    printf("P로 시작하는 단어의 수 = %d", p);
    return 0;
}

// 한 칸 진전하지 않고 EOF를 검증하는 방법은 없을까?
// 다른 방법도 있을 듯 (대조 후 한칸 전으로 밀어준다든가)

// 아 이게 평소 다른 경우에서는 ch에 문자 하나를 할당하는 동시에 fp가 한 칸 진전하고,
// 해당 루프 동안에는 다시 fgetc()를 호출하는게 아니라 ch를 대조에 사용해서 fp가 의미없이 진전하는 것을 방지한거구나
// 이 문제에서는 fscanf를 사용했기 때문에 이런 문제가 생겼다고도 볼 수 있을 듯