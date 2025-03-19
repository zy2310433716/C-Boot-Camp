#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "hello world, hello C";
    char sub[] = "hello";

    char *result = strrstr(str, sub);
    if (result != NULL)
    {
        printf("子串最后一次出现位置：%s\n", result); // 输出：hello C
    }
    else
    {
        printf("未找到子串\n");
    }
    return 0;
}