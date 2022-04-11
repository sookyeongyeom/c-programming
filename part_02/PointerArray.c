#include <stdio.h>

int main()
{
    int n1 = 10, n2 = 20, n3 = 30;
    int *arr[3] = {&n1, &n2, &n3};

    printf("%d\n", *arr[0]); // 데이터
    printf("%p", arr[0]);    // 주소값

    return 0;
}