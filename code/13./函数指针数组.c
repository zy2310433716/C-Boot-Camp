#include <stdio.h>

int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int main()
{
    int (*pf[4])(int, int) = {add, sub};
    return 0;
}