#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int *)malloc(40);
    if (p == NULL)
    {
        perror("malloc error");
        return 1; // 非0表示异常返回
    }
    for (int i = 0; i < 10; i++)
    {
        //*(p + i) = i + 1;
        p[i] = i + 1;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", p[i]);
    }
    // 释放内存
    free(p);
    p = NULL;
    return 0; // 0表示正常返回
}