#include <stdio.h>

int global = 2023; // 全局变量
int main()
{
    int local = 2018; // 局部变量
    printf("%d\n", local);
    printf("%d\n", global);
    return 0;
}
