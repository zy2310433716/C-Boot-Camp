#include <limits.h>
#include <stdio.h>


int main()
{
    int a = 0;
    while(scanf("%d",&a) != EOF)
    {
        int i = 0;
        while(i < a)
        {
            printf("*");
            i++;
        }
    printf("\n");
    }
    return 0;
}