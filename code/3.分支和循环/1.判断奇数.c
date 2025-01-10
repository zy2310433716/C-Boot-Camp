#include <stdio.h>
int main()
{
    int num = 0;
    scanf("%d", &num);
    if (num % 2 == 1)
    {
        printf("%d：是一个奇数", num);
    }
    else
    {
        printf("%d：是一个偶数", num);
    }
    return 0;
}