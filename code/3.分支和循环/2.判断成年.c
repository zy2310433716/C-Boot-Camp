#include <stdio.h>

int main()
{
    int age = 0;
    scanf("%d", &age);
    if (age >= 18)
        printf("成年了\n");
    else
        printf("未成年\n");
    printf("可以谈恋爱了");
    return 0;
}