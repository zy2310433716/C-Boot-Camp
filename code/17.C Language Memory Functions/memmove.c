#include <stdio.h>
#include <string.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    // 源区域（arr + 1）与目标区域（arr）重叠，移动 12 字节（3 个 int）
    memmove(arr, arr + 1, 12);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}