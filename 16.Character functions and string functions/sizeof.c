#include <stdio.h>

int main()
{
    int a = 10;
    printf("%zu\n", sizeof(a));
    printf("%zu\n", sizeof a);
    printf("%zu\n", sizeof(int));
    return 0;
}