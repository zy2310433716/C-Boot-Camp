#include <stdio.h>
void test()
{
    printf("hehe\n");
}
int main()
{
    printf("test: %p\n", test);
    printf("&test: %p\n", &test);
    return 0;
}