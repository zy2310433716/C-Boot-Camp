#include <stdio.h> // 包含标准输入输出库

int is_leap_year(int y) // 定义函数 is_leap_year，参数为年份 y
{
    if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)) // 判断是否为闰年
    {
        return 1; // 如果是闰年，返回 1
    }
    else
    {
        return 0; // 如果不是闰年，返回 0
    }
}

int get_days_of_month(int y, int m) // 定义函数 get_days_of_month，参数为年份 y 和月份 m
{
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // 定义数组 days，存储每个月的天数
    int day = days[m];                                                // 获取指定月份的天数
    if (is_leap_year(y) && m == 2)                                    // 如果是闰年且月份为 2 月
    {
        day += 1; // 2 月的天数加 1
    }
    return day; // 返回该月的天数
}

int main() // 主函数
{
    int year = 0;                           // 定义变量 year 并初始化为 0
    int month = 0;                          // 定义变量 month 并初始化为 0
    scanf("%d %d", &year, &month);          // 从标准输入读取年份和月份
    int d = get_days_of_month(year, month); // 调用函数 get_days_of_month，获取指定月份的天数
    printf("%d\n", d);                      // 打印该月的天数
    return 0;                               // 返回 0，表示程序正常结束
}