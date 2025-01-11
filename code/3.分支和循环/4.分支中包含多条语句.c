#include <stdio.h>
int main()
{
    int age = 0;
    scanf("%d", &age);
    if (age >= 18) // if 后使用{} 控制多条语句-这个块也叫：程序块，或者复合语句
    {
        printf("成年了\n");
        printf("可以谈恋爱了\n");
    }
    else // else 后使用{}控制多条语句-这个块也叫：程序块，或者复合语句
    {
        printf("未成年\n");
        printf("不可以早恋哦\n");
    }
    return 0;
}