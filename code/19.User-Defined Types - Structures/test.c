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
    printf("%d\n", p.x);
    printf("%d\n", p.y);

    return 0;
}