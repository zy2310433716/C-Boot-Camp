// 求10个整数的最大值
#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int max = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("max=%d", max);
    return 0;
}