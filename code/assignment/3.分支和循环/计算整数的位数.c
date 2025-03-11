#include <stdio.h>

int main() // 主函数入口
{
    int num = 0;       // 定义整型变量num并初始化为0
    int count = 0;     // 定义整型变量count并初始化为0，用于计数位数
    scanf("%d", &num); // 从标准输入读取一个整数并存储到num中
    do
    {
        count++;   // 每次循环计数器count加1
        num /= 10; // 将num除以10，去掉最低位
    } while (num); // 当num不为0时继续循环
    printf("%d", count); // 输出整数的位数
    return 0;            // 返回0，表示程序正常结束
}