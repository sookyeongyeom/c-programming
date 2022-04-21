#include <stdio.h>

typedef struct
{
    int xpos;
    int ypos;
} Point;

void OrgSymTrans(Point *ptr) // 원점 대칭
{
    ptr->xpos *= -1;
    ptr->ypos *= -1;
}

void ShowPosition(Point pos)
{
    printf("[%d, %d]\n", pos.xpos, pos.ypos);
}

int main()
{
    Point pos = {7, -5};
    OrgSymTrans(&pos);
    ShowPosition(pos);
    OrgSymTrans(&pos);
    ShowPosition(pos);
    return 0;
}