#include <stdio.h>
#define MAX(A, B) ((A > B) ? (A) : (B))

int main()
{
    printf("Max = %d", MAX(3, 10));
    return 0;
}