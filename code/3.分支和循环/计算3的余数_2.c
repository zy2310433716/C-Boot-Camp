#include <stdio.h>
int main()
{
    int num = 0;
    scanf("%d", &num);
    switch (num % 3)
    {
    case 0:
        printf("整数,余数为0\n");
        break;
    case 1:
        printf("余数是1\n");
        break;
    case 2:
        printf("余数是2\n");
        break;
    }
    return 0;
}