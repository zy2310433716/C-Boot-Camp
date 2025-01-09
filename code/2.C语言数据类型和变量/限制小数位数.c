#include <stdio.h>
int main()
{
    printf("%*.*f\n", 6, 2, 0.5);
    return 0;
}
// 等同于printf("%6.2f\n", 0.5);