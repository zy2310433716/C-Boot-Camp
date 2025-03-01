// const 修饰指针变量
// 1.const 放在*的左边
//   限制的是指针变量指向的内容，不能通过指针变量p来改变*p的内容
//   但是p的内容

#include <stdio.h>
int main()
{
    int n = 10;
    int m = 20;
    int *const p = &n;
    *p = 20;
    printf("%d\n", n);
    p = &m;
    return 0;
}