#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *s;
    s = (char *)malloc(10);
    strcpy(s, "hello");
    printf("%s\n", s);
    free(s);
    return 0;
}