#include <stdio.h>

int my_strlen(char *p)
{
    int count = 0;
    while (*p)
    {
        count++;
        p++;
    }
    return count;
}
int main()
{

    char arr[] = "abcdef";
    int ret = 0;
    ret = my_strlen(arr);
    printf("%d ", ret);
    return 0;
}