#include <stdio.h>
int main()
{
    int num = 5;
    float f_num = (float)num; // 整数转浮点数
    printf("整数转浮点数：%.2f\n", f_num);

    float f = 3.14;
    int i_num = (int)f; // 浮点数转整数，截断小数
    printf("浮点数转整数：%d\n", i_num);
    return 0;
}