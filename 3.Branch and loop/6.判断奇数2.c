#include <stdio.h>
int main()
{
    int num = 0;
    scanf("%d", &num);
    if (num > 0)
    {
        if (num % 2 == 1)
        {
            printf("这是一个奇数");
        }
        else
        {
            printf("这是一个偶数");
        }
    }
    else
        printf("不是正数");
    return 0;
}