#include <stdio.h>

struct point
{
    int x;
    int y;
};

int main()
{
    struct point p;
    p.x = 5;
    p.y = 10;
    printf("修改前\n");
    printf("x=%d,y=%d\n", p.x, p.y);

    struct point *pp;
    pp = &p;

    pp->x = 10;
    pp->y = 5;

    printf("修改后\n");
    printf("x=%d,y=%d\n", pp->x, pp->y);
    return 0;
}