#include <stdio.h>
int main()
{
    int i = 1;
    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
            continue; // 这里continue跳过了后边的打印，来到了i++的调整部分
        printf("%d ", i);
    }
    return 0;
}