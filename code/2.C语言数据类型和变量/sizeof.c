#include <stdio.h>
int main()
{
    int a = 10;
    printf("%zd\n", sizeof(a));
    printf("%zd\n", sizeof a); // a是变量的名字，可以省略掉sizeof后边的()
    printf("%zd\n", sizeof(int));
    printf("%zd\n", sizeof(3 + 3.5));
    return 0;
}