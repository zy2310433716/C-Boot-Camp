#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sz = sizeof(arr) / sizeof(arr[0]);
    // 定义一个整型指针 p，并将其初始化为数组 arr 的首元素地址
    // &arr[0] 表示取数组 arr 第一个元素的地址
    int *p = &arr[0];
    for (int i = 0; i < sz; i++)
    {
        // 打印指针 p 所指向的元素的值
        // *p 表示解引用指针，即获取指针所指向的内存位置的值
        printf("%d ", *p);
        // 将指针 p 向后移动一个元素的位置
        // 因为 p 是整型指针，所以 p++ 会使指针指向下一个整型元素
        p++;
    }
    return 0;
}