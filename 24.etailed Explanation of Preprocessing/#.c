#include <stdio.h>

#define PRINT(n, format) printf("the value of " #n " is " format "\n", n)
int main()
{
    int a = 10;
    PRINT(a, "%d");
    float f = 3.14;
    PRINT(f, "%f");
    return 0;
}