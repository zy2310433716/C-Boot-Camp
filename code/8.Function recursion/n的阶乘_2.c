#include <stdio.h>
int Fact(int n)
{
    int i = 0;
    int ret = 1;
    for (i = 1; i <= n; i++)
    {
        ret *= i;
    }
    return ret;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = Fact(n);
    printf("%d", ret);
    return 0;
}