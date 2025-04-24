#include <stdio.h>
int main()
{
    printf("文件路径: %s\n", __FILE__);
    printf("当前行号: %d\n", __LINE__);
    printf("编译日期: %s\n", __DATE__);
    printf("编译时间: %s\n", __TIME__);
#if defined(__STDC__)
    printf("遵循 ANSI C 标准，__STDC__ 值为: %d\n", __STDC__);
#endif
    return 0;
}