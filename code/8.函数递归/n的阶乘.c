#include <stdio.h>

int Fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * Fact(n - 1);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = Fact(n);
    printf("%d", ret);
    return 0;
}