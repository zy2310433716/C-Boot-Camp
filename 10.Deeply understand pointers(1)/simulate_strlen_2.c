#include <stdio.h>

int my_strlen(char *p)
{
    char *start = p;
    while (*p)
    {
        p++;
    }
    return p - start;
}
int main()
{

    char arr[] = "abcdef";
    int ret = 0;
    ret = my_strlen(arr);
    printf("%d ", ret);
    return 0;
}