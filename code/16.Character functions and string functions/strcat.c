#include <stdio.h>
#include <string.h>

int main()
{
    char dest[50] = "Hello, ";
    char src[] = "World!";

    // 使用 strcat 函数连接字符串
    strcat(dest, src);

    printf("连接后的字符串: %s\n", dest);

    return 0;
}