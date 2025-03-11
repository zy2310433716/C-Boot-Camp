#include <stdio.h>

int main()
{
    int a = 10;
    int *pa = &a; // 取出a的地址并存储到指针变量pa中
    *pa = 0;
    return 0;
}