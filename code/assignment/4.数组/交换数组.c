#include <stdio.h>

int main()
{
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 10};
    for (int i = 0; i < 10; i++)
    {
        int tmp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = tmp;
    }
    printf("交换完成\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}