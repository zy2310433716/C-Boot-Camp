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

void calc(int (*pf)(int, int))
{
    int x = 0;
    int y = 0;
    int ret = 0;
    printf("请输入两个操作数");
    scanf("%d %d", &x, &y);
    ret = pf(x, y);
    printf("%d\n", ret);
}

int main()
{

    int input = 0;
    do
    {
        menu();
        printf("请选择");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            calc(add);
            break;
        case 2:
            calc(sub);
            break;
        case 3:
            calc(mul);
            break;
        case 4:
            calc(div);
            break;
        case 0:
            printf("退出");
            break;
        default:
            printf("选择错误,请重新选择");
            break;
        }
    } while (input);
    return 0;
}