#include <stdio.h>
int add(int x, int y)
{
    return x + y;
}

int main()
{
    int (*pf)(int, int) = add;
    printf("%d\n", (*pf)(2, 3));
    printf("%d\n", pf(3, 5));
    return 0;
}