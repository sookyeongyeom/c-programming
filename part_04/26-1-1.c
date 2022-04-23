#include <stdio.h>
#define ADD(A, B, C) ((A) + (B) + (C))
#define MUL(A, B, C) ((A) * (B) * (C))

int main()
{
    printf("%d\n", ADD(1, 2, 3));
    printf("%d", MUL(1, 2, 3));
    return 0;
}