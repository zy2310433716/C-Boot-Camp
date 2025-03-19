#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "hello world";
    memset(str, 'x', 6);
    printf("%s", str);
    return 0;
}