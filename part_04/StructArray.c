#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};

int main()
{
    struct point arr[3];

    for (int i = 0; i < 3; i++)
    {
        printf("좌표 입력 = "), scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("[%d, %d] ", arr[i].xpos, arr[i].ypos);
    }

    return 0;
}