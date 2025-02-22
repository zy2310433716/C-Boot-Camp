#include <stdio.h>

int is_prime(int n)
{
    for (int j = 2; j < n; j++)
    {
        if (n % j == 0)
        {
            return 0; // 不是素数
        }
    }
    return 1;
}

int main()
{
    for (int i = 100; i <= 200; i++)
    {
        int r = is_prime(i);
        if (r == 1)
        {
            printf("%d是素数\n", i);
        }
    }
    return 0;
}