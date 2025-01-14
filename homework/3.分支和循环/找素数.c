#include <stdio.h>
int main()
{
    int i = 0;
    for (i = 100; i <= 200; i++)
    {
        int j = 0;
        int flag = 1;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0) // 如果i能被j整除
            {
                flag = 0; // 将flag置为0，表示i不是素数
                break;    // 跳出内层循环
            }
        }
        if (flag == 1) // 如果flag仍为1，表示i是素数
        {
            printf("%d ", i); // 打印素数
        }
    }
    return 0;
}