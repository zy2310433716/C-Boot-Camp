#include <stdio.h>
int main()
{
    int arr[10] = {0};
    int *p = &arr[0];
    int i = 0;
    for (i = 0; i <= 11; i++)
    {
        // 当指针指向的范围超出数组arr的范围时，p就是野指针
        *(p++) = i;
    }
    return 0;
}