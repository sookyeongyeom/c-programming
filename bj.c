#include <stdio.h>

int main()
{
    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    printf("%d\n", (n2 % 10) * n1);
    printf("%d\n", (n2 % 100 / 10) * n1);
    printf("%d\n", (n2 / 100) * n1);
    printf("%d", n1 * n2);
    return 0;
}