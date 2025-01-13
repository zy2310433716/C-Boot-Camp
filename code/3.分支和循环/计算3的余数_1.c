#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    if (n % 3 == 0)
        printf("整除，余数为0\n");
    else if (n % 3 == 1)
        printf("余数是1\n");
    else
        printf("余数是2\n");
    return 0;
}