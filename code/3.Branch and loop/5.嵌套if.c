#include <stdio.h>
int main()
{
    int num = 0;
    scanf("%d", &num);
    if (num == 0)
        printf("输入的数字是0\n");
    else if (num > 0) // 这里的if 相当于嵌套在else语句中，形成了嵌套结构
        printf("输入的数字是正数\n");
    else
        printf("输入的数字是负数\n");
    return 0;
}