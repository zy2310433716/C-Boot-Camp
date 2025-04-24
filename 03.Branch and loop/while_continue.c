#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 10)
    {
        if (i == 5)
            continue;
        // 当i等于5后，就执行continue，直接跳过continue的代码，去循环的判断的地方
        // 因为这里跳过了i = i+1，所以i一直为5，程序陷入和死循环
        printf("%d ", i);
        i = i + 1;
    }
    return 0;
}