#include <stdio.h>

void func(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d*%d=%d ", i, j, i * j);
        }
        printf("\n");
    }
}

int main()
{
    func(9);
    return 0;
}