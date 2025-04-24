#include <stdio.h> // 包含标准输入输出库

int main() // 主函数
{
    int a = 0;                                   // 定义变量 a 并初始化为 0
    int b = 0;                                   // 定义变量 b 并初始化为 0
    int c = 0;                                   // 定义变量 c 并初始化为 0
    while (scanf("%d %d %d", &a, &b, &c) != EOF) // 从标准输入读取三个整数，直到文件结束符
    {
        if ((a + b) > c && (a + c) > b && (b + c) > a) // 判断是否能构成三角形
        {
            if (a == b && b == c) // 判断是否为等边三角形
            {
                printf("Equilateral triangle!\n"); // 打印 "Equilateral triangle!"
            }
            else if (a == b && b != c || a == c && c != b || b == c && c != a) // 判断是否为等腰三角形
            {
                printf("Isosceles triangle!\n"); // 打印 "Isosceles triangle!"
            }
            else // 否则为普通三角形
            {
                printf("Ordinary triangle!\n"); // 打印 "Ordinary triangle!"
            }
        }
        else // 如果不能构成三角形
        {
            printf("Not a triangle!\n"); // 打印 "Not a triangle!"
        }
    }
    return 0; // 返回 0，表示程序正常结束
}