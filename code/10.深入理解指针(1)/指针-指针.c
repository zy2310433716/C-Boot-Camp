#include <stdio.h>
#include <stddef.h>
int main()
{
    // 定义一个整型数组
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // 定义两个指向数组元素的指针
    int *ptr1 = &arr[2]; // 指向数组的第3个元素（索引为2）
    int *ptr2 = &arr[7]; // 指向数组的第8个元素（索引为7）

    // 计算两个指针之间的元素个数
    ptrdiff_t diff = ptr2 - ptr1;

    // 输出结果
    printf("ptr2 - ptr1 的结果是: %td\n", diff);

    return 0;
}