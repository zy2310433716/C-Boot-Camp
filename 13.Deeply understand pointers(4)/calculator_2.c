#include <stdio.h>
void menu()
{
    printf("----------计算器-----------\n");
    printf("---- 1.add   2.sub -------\n");
    printf("---- 3.mul   4.div -------\n");
    printf("----    0.exit     -------\n");
    printf("--------------------------\n");
}
int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int mul(int x, int y)
{
    return x * y;
}

int div(int x, int y)
{
    return x / y;
}

int main()
{
    int x = 0;
    int y = 0;
    int input = 0;
    int ret = 0;
    int (*pfarr[5])(int, int) = {NULL, add, sub, mul, div};
    do
    {
        menu();
        printf("请选择");
        scanf("%d", &input);
        if (input >= 1 && input <= 4)
        {
            printf("请输入两个操作数");
            scanf("%d %d", &x, &y);
            ret = pfarr[input](x, y);
            printf("%d\n", ret);
        }
        else if (input == 0)
        {
            printf("退出");
            break;
        }
        else
        {
            printf("选择错误");
        }
    } while (input);
    return 0;
}