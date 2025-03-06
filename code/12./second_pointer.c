#include <stdio.h>

int main()
{
    int a = 0;
    int *pa = &a;    // pa是一个指针变量，也叫一级指针变量
    int **ppa = &pa; // ppa就是二级指针变量，是用来存放一级指针变量地址的
    **ppa = 200;
    printf("%d\n", a);
    return 0;
}