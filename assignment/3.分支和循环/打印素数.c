#include <stdio.h>
int main()
{
    // 产生100~200之间的数
    for (int i = 100; i <= 200; i++)
    {
        int flag = 1; // 假设i是素数
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}