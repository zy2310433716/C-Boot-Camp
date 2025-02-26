#include <stdio.h>
int fun()
{
    static int count = 1;
    return ++count;
}
int main()
{
    int answer;
    answer = fun() - fun() * fun();
    printf("%d\n", answer); // 输出多少？
    return 0;
}