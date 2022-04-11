#include <stdio.h>

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6}, temp;
    int *front = &arr[0], *back = &arr[5];

    temp = *front;  // temp에 1 저장
    *front = *back; // *front에 6 저장
    *back = temp;   // *back에 temp=1 저장

    front++, back--; // front=arr[1], back=arr[4]
    temp = *front;   // temp에 2 저장
    *front = *back;  // *front에 5 저장
    *back = temp;    // *back에 temp=2 저장

    front++, back--; // front=arr[2], back=arr[3]
    temp = *front;   // temp에 3 저장
    *front = *back;  // *front에 4 저장
    *back = temp;    // *back에 temp=3 저장

    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);
    printf("%d\n", arr[3]);
    printf("%d\n", arr[4]);
    printf("%d", arr[5]);

    return 0;
}