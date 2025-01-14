#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 10)
    {
        if (i == 5)
            break; // 当i等于5后，就执行break，循环就终止了
        printf("%d ", i);
        i = i + 1;
    }
    return 0;
}