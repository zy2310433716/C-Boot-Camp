// 表达式5
#include <stdio.h>
int main()
{
    int i = 1;
    int ret = (++i) + (++i) + (++i);
    printf("%d\n", ret);
    printf("%d\n", i);
    return 0;
}
// 尝试在linux 环境gcc编译器，VS2013环境下都执行，看结果。
