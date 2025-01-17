#include <stdio.h>

/*
 * 计算1 - 1/2 + 1/3 - 1/4 + ... + 1/99 - 1/100的和
 */
int main()
{
    double sum = 0.0; // 初始化求和变量

    // 循环从1到100
    for (int i = 1; i <= 100; i++)
    {
        // 判断当前项的符号
        if (i % 2 == 0) // 偶数项为负
            sum -= 1.0 / i;
        else // 奇数项为正
            sum += 1.0 / i;
    }

    // 输出最终结果，保留6位小数
    printf("%lf", sum);
    return 0; // 程序正常结束
}
