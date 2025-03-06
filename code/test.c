#include <stdio.h>

int main()
{
    int arr[10] = {0};
    int sz = sizeof(arr) / sizeof(arr[0]);
    // 1.给数组输入值
    for (int i = 0; i < sz; i++)
    {
        scanf("%d", &arr[i]);
    }
    // 2.将数组的所有值打印出来
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}