#include <stdio.h>

int is_runyear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        return 1;
    }
    return 0;
}
int main()
{
    int year = 0;
    scanf("%d", &year);
    int r = is_runyear(year);
    if (r == 1)
    {
        printf("%d是闰年", year);
    }
    else
    {
        printf("%d不是闰年", year);
    }
    return 0;
}