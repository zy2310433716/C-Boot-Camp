#include <stdio.h>
int main()
{
    int year = 0;
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0)
    {
        printf("是闰年\n");
    }
    else if (year % 400 == 0)
    {
        printf("是闰年\n");
    }
    else
    {
        printf("不是闰年\n");
    }
    return 0;
}