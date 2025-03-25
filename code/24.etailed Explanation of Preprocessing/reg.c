#include <stdio.h>

// 用 `reg` 作为 `register` 关键字的别名
#define reg register

int main()
{
    // 使用别名 `reg` 声明寄存器变量，等价于 `register int num = 20;`
    reg int num = 20;
    printf("num: %d\n", num); // 输出：num: 20
    return 0;
}