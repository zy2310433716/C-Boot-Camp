// 1. 实现函数init() 初始化数组为全0
// 2. 实现print()  打印数组的每个元素
// 3. 实现reverse()  函数完成数组元素的逆置。

#include <stdio.h>
void init(int arr[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        arr[i] = i;
    }
}

void print(int arr[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

void reverse(int arr[], int sz)
{
    int left = 0;
    int right = sz - 1;
    int tmp = 0;
    while (left < right)
    {
        tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++;
        right--;
    }
}
int main()
{
    int arr[10] = {0};
    int sz = sizeof(arr) / sizeof(arr[0]);
    init(arr, sz);
    print(arr, sz);
    reverse(arr, sz);
    print(arr, sz);
    return 0;
}