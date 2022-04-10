#include <stdio.h>

int main()
{
    int num = 10;
    int other = 100; // ❗ Test : 값 복사되는 것 맞는지 확인용
    int *ptr1 = &num;
    int *ptr2 = ptr1;

    (*ptr1)++;             // num 11됨
    ptr1 = &other;         // ❗ Test : 이 시점에서 ptr1은 other을 가리키게 함
    (*ptr2)++;             // num 12됨
    (*ptr1)++;             // ❗ Test : other 101 됨
    printf("%d\n", num);   // 12 나옴
    printf("%d\n", *ptr1); // ❗ Test : 101 나옴
    return 0;
}

// 오 이게 되게 재밌네. 예를 들어 num의 주소값이 AAA라면,
// ptr1에는 AAA가 담기게 되는 거고,
// ptr2는 ptr1이 갖고 있는 값인 AAA를 복사해서 갖게 되는 모양이네.
// 그렇게 되면 결국 ptr1도 AAA, ptr2도 AAA를 가리키게 되는거고.

// ❗ Test 결과 주소값이 값 복사 되는 것 맞음.
// ptr2에 ptr1을 할당한 후 ptr1이 다른 주소를 가리키게 했을 때, ptr2에는 기존의 주소값이 낭음
