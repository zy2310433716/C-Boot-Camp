#include <stdio.h>

void test(int arr[]) // 参数写成数组形式，本质上还是指针
{
    printf("%lu\n", sizeof(arr));
}
void test(int *arr) // 参数写成指针形式
{
    printf("%lu\n", sizeof(arr)); // 计算一个指针变量的大小
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    test(arr);
    return 0;
}