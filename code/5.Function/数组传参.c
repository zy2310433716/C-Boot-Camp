#include <stdio.h> // 包含标准输入输出库

void set_arr(int arr[], int sz) // 定义函数 set_arr，参数为整数数组和数组大小
{
    int i = 0;               // 定义变量 i 并初始化为 0
    for (i = 0; i < sz; i++) // 循环遍历数组
    {
        arr[i] = -1; // 将数组中的每个元素设置为 -1
    }
}

void print_arr(int arr[], int sz) // 定义函数 print_arr，参数为整数数组和数组大小
{
    int i = 0;               // 定义变量 i 并初始化为 0
    for (i = 0; i < sz; i++) // 循环遍历数组
    {
        printf("%d", arr[i]); // 打印数组中的每个元素
    }
}

int main() // 主函数
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // 定义并初始化一个整数数组
    int sz = sizeof(arr) / sizeof(arr[0]);       // 计算数组的大小
    set_arr(arr, sz);                            // 调用函数 set_arr，将数组中的每个元素设置为 -1
    print_arr(arr, sz);                          // 调用函数 print_arr，打印数组中的每个元素
    return 0;                                    // 返回 0，表示程序正常结束
}