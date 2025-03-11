#include <stdio.h>

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int num1 = 0;
    int num2 = 0;
    scanf("%d %d", &num1, &num2);
    int r = add(num1, num2);
    printf("%d\n", r);
    return 0;
}