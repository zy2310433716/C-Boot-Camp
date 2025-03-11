#include <stdio.h> // 包含标准输入输出库

int main() // 主函数入口
{
    int m = 0;
    int n = 0;
    scanf("%d %d", &m, &n);
    int tmp = 0;       // 定义整型变量tmp用于临时存储
    while (m % n != 0) // 当m不能被n整除时，继续循环
    {
        tmp = m % n; // 计算m除以n的余数并赋值给tmp
        m = n;       // 将n的值赋给m
        n = tmp;     // 将余数tmp的值赋给n
    }
    printf("%d\n", n); // 输出n，即最大公约数
    return 0;
}