#include <stdio.h>
#include <stdbool.h>
int main()
{
    printf("%zd\n", sizeof(char));
    printf("%zd\n", sizeof(short));
    printf("%zd\n", sizeof(int));
    printf("%zd\n", sizeof(long));
    printf("%zd\n", sizeof(long long));
    printf("%zd\n", sizeof(float));
    printf("%zd\n", sizeof(double));
    printf("%zd\n", sizeof(long double));
    return 0;
}