#include <stdio.h>
int main()
{
    int arr[10] = {0};
    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);

    // 输入
    int *p = arr;
    for (i = 0; i < sz; i++)
    {
        // scanf("%d", p + i);  也可以这样写
        scanf("%d", arr + i);
    }
    // 输出
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}