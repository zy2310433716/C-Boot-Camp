#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "hello";
    char str2[] = "hellworld";

    // 比较前 4 个字符
    int result = strncmp(str1, str2, 4);
    if (result == 0)
    {
        printf("前 4 个字符相等\n");
    }
    else if (result > 0)
    {
        printf("str1 前 4 个字符更大\n");
    }
    else
    {
        printf("str1 前 4 个字符更小\n");
    }
    return 0;
}