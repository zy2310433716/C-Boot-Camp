#include <stdio.h>
int main()
{
    int month = 0;
    scanf("%d", &month);
    if (month == 12 || month == 1 || month == 2)
    {
        printf("冬季\n");
    }
    return 0;
}