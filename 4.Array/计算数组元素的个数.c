#include <stdio.h>
int main()
{
    int arr[10] = {0};
    int sz = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", sz);
    return 0;
}