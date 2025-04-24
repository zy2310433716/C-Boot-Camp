#include <stdio.h>

// 用 `do_forever` 替代 `for(;;)` 表示无限循环
#define do_forever for (;;)

int main()
{
    int i = 0;
    // 使用 `do_forever` 实现循环，等价于 `for(;;)`
    do_forever
    {
        printf("循环次数：%d\n", i);
        if (i >= 2)
        { // 循环3次后退出
            break;
        }
        i++;
    }
    return 0;
}