#include <stdio.h>
int main()
{
    int n = 10;
    char *pc = (char *)&n;
    int *pi = &n;
    printf("&n= %p\n", &n);
    printf("pc= %p\n", pc);
    printf("pc+1= %p\n", pc + 1);
    printf("pi= %p\n", pi);
    printf("pi+1= %p\n", pi + 1);
    return 0;
}