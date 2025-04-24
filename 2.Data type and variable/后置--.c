#include <stdio.h>
int main()
{
    int a = 10;
    int b = a--;                 //--的操作数是a，是放在a的后面的，就是后置--
    printf("a=%d b=%d\n", a, b); // 输出的结果是：9 10
    return 0;
}