#include <stdio.h>

int main()
{
    printf("%d\n", 11 % -5);  // 1
    printf("%d\n", -11 % -5); // -1
    printf("%d\n", -11 % 5);  // -1
    return 0;
}