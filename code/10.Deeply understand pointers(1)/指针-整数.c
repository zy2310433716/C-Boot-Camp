#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sz = sizeof(arr) / sizeof(arr[0]);
    int *p = &arr[sz - 1];
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", *p);
        p--;
    }
    return 0;
}