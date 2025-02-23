#include <stdio.h>

int bin_search(int arr[], int left, int right, int key)
{
    while (left <= right) // 二分查找算法
    {
        int mid = (left + right) / 2; // 计算中间位置
        if (arr[mid] < key)           // 如果中间值小于目标值，移动左边界
        {
            left = mid + 1;
        }
        else if (arr[mid] > key) // 如果中间值大于目标值，移动右边界
        {
            right = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sz = sizeof(arr) / sizeof(arr[0]);
    int r = bin_search(arr, 0, sz - 1, 6);
    if (r == -1)
    {
        printf("没找到");
    }
    else
    {
        printf("找到了数字是%d", arr[r]);
    }
    return 0;
}