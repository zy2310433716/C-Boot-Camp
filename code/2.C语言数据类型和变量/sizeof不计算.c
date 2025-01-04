#include <stdio.h>

int main()
{
    short s = 2;
    int b = 10;
    printf("%zd\n", sizeof(s = b + 1));
    printf("s = %d\n", s);
    return 0;
}