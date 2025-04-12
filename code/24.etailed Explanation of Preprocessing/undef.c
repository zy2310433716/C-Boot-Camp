#include <stdio.h>

// 第一次定义宏 MAX
#define MAX 1000

int main()
{
    int m = MAX;
    printf("第一次使用 MAX：%d\n", m); // 输出：第一次使用 MAX：1000

// 移除宏 MAX 的定义
#undef MAX

// 重新定义宏 MAX
#define MAX 2000
    int n = MAX;
    printf("重新定义后使用 MAX：%d\n", n); // 输出：重新定义后使用 MAX：2000

    return 0;
}