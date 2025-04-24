#include <stdio.h>
int main()
{
    const int n = 0;
    int *p = &n;
    *p = 20;
    printf("n = %d\n", n);
    return 0;
}