#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d", &a);
    b = a > 5 ? 3 : -3;
    printf("%d\n", b);
    return 0;
}