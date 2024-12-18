#include <stdio.h>



int main()
{
    int M = 0;
    scanf("%d",&M);
    if(M >= 1 && M <= 100000)
    {
        if(M % 5 == 0)
        {
            printf("YES");
        }
        else 
        {
            printf("NO");
        }
    }
    return 0;
}