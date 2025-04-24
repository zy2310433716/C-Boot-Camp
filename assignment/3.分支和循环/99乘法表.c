#include <stdio.h>
int main()
{

    for (int i = 1; i <= 9; i++) // 外层循环，从1遍历到9，表示乘法表的行数
    {
        for (int j = 1; j <= i; j++) // 内层循环，从1遍历到i，表示每行的列数
        {
            printf("%d*%d=%d ", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}