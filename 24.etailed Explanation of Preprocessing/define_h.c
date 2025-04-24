#include <stdio.h>
#define ADD(a, b) ((a) + (b))             // 计算两数之和
#define MAX(a, b) ((a) > (b) ? (a) : (b)) // 取两数中的较大值

int main()
{
    int x = 10;
    int y = 20;
    int sum = ADD(x, 5);     // 预处理后替换为 ((10) + (5))
    int max_val = MAX(x, y); // 预处理后替换为 ((10) > (20) ? (10) : (20))
    printf("%d\n", sum);
    printf("%d\n", max_val);
    return 0;
}