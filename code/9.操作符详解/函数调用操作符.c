#include <stdio.h>
void test1()
{
    printf("hehe\n");
}
void test2(const char *str)
{
    printf("%s\n", str);
}
int main()
{
    test1();             // 这里的()就是作为函数调用操作符。
    test2("hello bit."); // 这里的()就是函数调用操作符。
    return 0;
}