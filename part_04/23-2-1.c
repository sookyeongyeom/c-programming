#include <stdio.h>

typedef struct
{
    int xpos;
    int ypos;
} Point;

typedef struct
{
    Point leftUp;
    Point rightDown;
} Rectangle;

void RectangleArea(Rectangle rect)
{
    int area;
    area = (rect.rightDown.xpos - rect.leftUp.xpos) * (rect.leftUp.ypos - rect.rightDown.ypos);
    printf("직사각형의 넓이 = %d", area);
}

int main()
{
    Rectangle rect = {{0, 100}, {100, 0}}; // 좌상단, 우하단

    RectangleArea(rect);

    return 0;
}
