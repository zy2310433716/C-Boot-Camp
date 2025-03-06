#include <stdio.h>
void soft(int arr[], int sz)
{
    // 确定趟数，假设10个数字需要排序，需要9趟,也就是n-1趟
    for (int i = 0; i < sz - 1; i++)
    {
        // 一趟冒泡排序的过程
        for (int j = 0; j < sz - 1 - i; j++) // 决定比较的对数
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}
void print_arr(int arr[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{

    int arr[] = {2, 1, 5, 8, 9, 0, 4, 6, 3, 7};
    int sz = sizeof(arr) / sizeof(arr[0]);
    print_arr(arr, sz);
    sort(arr, sz);
    print_arr(arr, sz);
    return 0;
}
