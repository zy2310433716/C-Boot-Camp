#include <stdio.h>
int main()
{
    int a = 10;
    int b = a++; //++操作数式a，是放在a后面的
    printf("a=%d,b=%d", a, b);
    return 0;
}