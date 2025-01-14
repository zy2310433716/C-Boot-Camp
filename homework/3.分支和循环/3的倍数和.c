#include <stdio.h>
int main() // 主函数入口
{
    int i = 0;                 // 定义循环计数器变量i并初始化为0
    int sum = 0;               // 定义累加和变量sum并初始化为0
    for (i = 1; i <= 100; i++) // 从1循环到100
    {
        if (i % 3 == 0) // 如果i是3的倍数
            sum += i;   // 将i累加到sum中
    }
    printf("%d\n", sum); // 输出累加和sum
    return 0;            // 返回0，表示程序正常结束
}