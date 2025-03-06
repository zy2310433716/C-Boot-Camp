#include <stdio.h>
void sort(int arr[], int sz)
{

    for (int i = 0; i < sz - 1; i++)
    {
        int flag = 0; // 假设数据已经有序了
        for (int j = 0; j < sz - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                flag = 1; // 说明这一次冒泡排序的数据不是有序的
            }
        }
        if (flag == 0)
        {
            break;
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
