#include <stdio.h>

int main()
{
    // 定义一个包含10个整数的数组，并初始化
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;

    // 通过数组下标将数组元素依次赋值为0到9
    for (i = 0; i < 10; i++)
    {
        arr[i] = i;
    }

    // 定义一个指针，并让其指向数组的首元素
    int *p = &arr[0];

    // 进行NULL检查
    if (p != NULL)
    {
        // 可以在这里对数组进行其他操作
        for (i = 0; i < 10; i++)
        {
            printf("%d ", *(p + i));
        }
        printf("\n");
    }

    return 0;
}