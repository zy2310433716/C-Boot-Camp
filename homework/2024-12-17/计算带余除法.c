#include <stdio.h>

int main()
{
    // 定义变量
    int a = 0;
    int b = 0;

    //输入数据
    scanf("%d %d",&a,&b);
    
    //计算
    int c = a / b;
    int d = a % b;
    //输出
    printf("%d %d",c,d);
    return 0;
}