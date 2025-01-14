#include <stdio.h>
int main()
{
    int num = 0;
    scanf("%d", &num);
    // 循环到num变成0
    while (num)
    {
        printf("%d", num % 10);
        // num = num / 10
        num /= 10;
    }
    return 0;
}