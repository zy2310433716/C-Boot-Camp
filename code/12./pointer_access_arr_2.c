#include <stdio.h>
int main()
{
    int arr[10] = {0};
    // 输入
    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    // 输入
    int *p = arr;
    for (i = 0; i < sz; i++)
    {
        scanf("%d", p + i);
        // scanf("%d", arr+i);//也可以这样写
    }
    // 输出
    for (i = 0; i < sz; i++)
    {
        printf("%d ", p[i]);
    }
    return 0;
}