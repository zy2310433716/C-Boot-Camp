#include <stdio.h>
int main()
{
    int age = 0;
    scanf("%d", &age);
    if (18 <= age <= 36)
    {
        printf("青年\n");
    }
    return 0;
}