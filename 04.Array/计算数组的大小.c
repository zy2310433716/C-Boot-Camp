#include <stdio.h>

int main()
{
    int arr[10] = {0};
    printf("%lu\n", sizeof(arr[0])); // 计算一个元素的大小，单位是字节。
    return 0;
}