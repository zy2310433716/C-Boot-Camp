#include <stdio.h>
#include <string.h>

int main()
{
    char arr1[] = "hello";
    char arr2[] = "hello";

    // 比较 arr1 和 arr2 的前 5 字节
    int result = memcmp(arr1, arr2, 5);

    if (result == 0)
    {
        printf("两块内存区域内容相等\n");
    }
    else if (result < 0)
    {
        printf("arr1 内容小于 arr2\n");
    }
    else
    {
        printf("arr1 内容大于 arr2\n");
    }
    return 0;
}