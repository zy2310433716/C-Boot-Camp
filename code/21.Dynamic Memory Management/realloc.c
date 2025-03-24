#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p = (int *)malloc(10 * sizeof(int));
    if (p == NULL)
    {
        perror("malloc error");
        return 1; // 非0表示异常返回
    }

    for (int i = 0; i < 5; i++)
    {
        p[i] = 5;
    }
    int *ptr = realloc(p, 20 * sizeof(int));
    if (ptr == NULL)
    {
        perror("realloc");
        return 1;
    }
    else
    {
        p = ptr;
    }
    for (int i = 5; i < 15; i++)
    {
        p[i] = 10;
    }
    for (int i = 0; i < 15; i++)
    {
        printf("%d ", p[i]);
    }
    free(p);
    p = NULL;
    return 0;
}