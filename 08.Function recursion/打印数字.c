#include <stdio.h>

void Print(int n)
{
    if (n > 9)
    {
        Print(n / 10);
    }
    printf("%d ", n % 10);
}

int main()
{
    int m = 0;
    scanf("%d", &m);
    Print(m);
    return 0;
}