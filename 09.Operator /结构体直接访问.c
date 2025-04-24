#include <stdio.h>
struct Point
{
    int x;
    int y;
} p = {1, 2};
int main()
{
    printf("x: %d y: %d\n", p.x, p.y);
    return 0;
}