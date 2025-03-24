#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p = (int *)calloc(10, sizeof(int));
    if (p == NULL)
    {
        perror("calloc error");
        return 1;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", p[i]);
    }
    free(p);
    p = NULL;
    return 0;
}