#include <stdio.h>
int main()
{
    int arr[3][5] = {0};
    int i = 0;
    int j = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
        }
    }
    return 0;
}