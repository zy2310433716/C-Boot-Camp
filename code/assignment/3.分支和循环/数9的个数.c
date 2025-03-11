// 编写程序数一下 1到 100 的所有整数中出现多少个数字9
#include <stdio.h>
int main()
{
    int count = 0;
    for (int i = 1; i <= 100; i++)
    {

        if (i / 10 == 9)
        {
            count++;
        }
        else if (i % 10 == 9)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}