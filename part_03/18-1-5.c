#include <stdio.h>

int main()
{
    int arr[2][2][2] = {1, 2, 3, 4, 5, 6, 7, 8};
    printf("%d\n", arr[1][0][1]);

    printf("%d\n", (*(arr + 1))[0][1]);
    printf("%d\n", (*(arr[1] + 0))[1]);
    printf("%d\n", *(*(*(arr + 1) + 0) + 1));
    printf("%d\n", (*(*(arr + 1) + 0))[1]);
    printf("%d", *(arr[1][0] + 1));
    return 0;
}

// arr[n] == (*(arr+n)) 괄호로 감싸서 치환해주어야 이후 인덱스를 사용한 추가 연산이 정상적으로 됨