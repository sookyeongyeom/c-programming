#include <stdio.h>

int main()
{
    char str1[] = "My String";       // 배열의 이름=상수 형태의 포인터, 배열로 선언한 문자열=변수 형태의 문자열
    char *str2 = "Your String";      // 변수 형태의 포인터, 포인터로 가리킨 문자열=상수 형태의 문자열
    printf("%s | %s\n", str1, str2); // My String | Your String

    str2 = "Other String";           // 포인터 str2가 다른 문자열을 가리키게 함
    printf("%s | %s\n", str1, str2); // My String | Other String

    str1[0] = 'm';                   // 문자열 변경 성공 (변수 행태의 문자열)
    printf("%s | %s\n", str1, str2); // my String | Other String

    str2[0] = 'o';                   // 문자열 변경 실패 (상수 형태의 문자열)
    printf("%s | %s\n", str1, str2); // my String | Other String

    return 0;
}