#include <stdio.h>
int main()
{
    int a = 10;
    &a; // 取出a的地址
    printf("%p\n", &a);
    return 0;
}