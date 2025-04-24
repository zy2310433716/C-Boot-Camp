#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // 定义一个有序数组
    int k = 8;                                   // 要查找的目标值
    int sz = sizeof(arr) / sizeof(arr[0]);       // 计算数组的大小
    int left = 0;                                // 初始化左边界
    int right = sz - 1;                          // 初始化右边界
    int flag = 0;                                // 标志位，表示是否找到目标值
    while (left <= right)                        // 二分查找算法
    {
        int mid = (left + right) / 2; // 计算中间位置
        if (arr[mid] < k)             // 如果中间值小于目标值，移动左边界
        {
            left = mid + 1;
        }
        else if (arr[mid] > k) // 如果中间值大于目标值，移动右边界
        {
            right = mid - 1;
        }
        else // 找到目标值，打印下标并设置标志位
        {
            printf("找到了，下标是%d\n", mid);
            flag = 1;
            break;
        }
    }
    if (flag == 0) // 如果没有找到目标值，打印提示信息
    {
        printf("没找到");
    }
    return 0; // 返回0，表示程序正常结束
}