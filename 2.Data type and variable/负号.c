#include <stdio.h>
int main()
{
    int a = 10;
    int b = -a;
    int c = -10;
    printf("b=%d c=%d\n", b, c); // 这里的b和c都是-10
    return 0;
}