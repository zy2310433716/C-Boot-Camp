// 指针的关系运算
#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = &arr[0];
    int sz = sizeof(arr) / sizeof(arr[0]);
    // arr是数组首地址，arr + sz指向数组最后一个元素的下一个位置
    while (p < &arr[sz]) // 指针的大小比较
    {
        printf("%d ", *p);
        p++;
    }
    return 0;
}