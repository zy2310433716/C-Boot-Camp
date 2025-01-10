#include <stdio.h>
int main()
{
    int year = 0;
    int month = 0;
    int day = 0;
    scanf("%d%*c%d%*c%d", &year, &month, &day);
    printf("%d%d%d\n", year, month, day);
    return 0;
}