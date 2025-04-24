#include <stdio.h>
int main()
{
    int age = 0;
    scanf("%d", &age);
    if (age < 18)
    {
        printf("小登");
    }
    else if (age <= 44)
    {
        printf("青登");
    }
    else if (age <= 59)
    {
        printf("中登");
    }
    else if (age <= 89)
    {
        printf("老登");
    }
    else
        printf("老寿星");
    return 0;
}