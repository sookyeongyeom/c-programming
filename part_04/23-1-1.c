#include <stdio.h>

typedef struct
{
    int xpos;
    int ypos;
} Point;

void SwapPoint(Point *ptr1, Point *ptr2)
{
    Point temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    // int temp;

    // temp = ptr1->xpos;
    // ptr1->xpos = ptr2->xpos;
    // ptr2->xpos = temp;

    // temp = ptr1->ypos;
    // ptr1->ypos = ptr2->ypos;
    // ptr2->ypos = temp;
}

int main()
{
    Point pos1 = {2, 4};
    Point pos2 = {5, 7};

    SwapPoint(&pos1, &pos2);

    printf("pos1 [%d, %d]\n", pos1.xpos, pos1.ypos);
    printf("pos2 [%d, %d]", pos2.xpos, pos2.ypos);

    return 0;
}