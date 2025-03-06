void test()
{
    printf("hehe\n");
}
void (*pf1)() = &test;
void (*pf2)() = test;
int Add(int x, int y)
{
    return x + y;
}
int (*pf3)(int, int) = Add;
int (*pf3)(int x, int y) = &Add; // x和y写上或者省略都是可以的