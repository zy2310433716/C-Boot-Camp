#include <stdio.h>
#include <string.h>

int main()
{

    char source[] = "Hello, World!";
    char destination[20]; // 确保有足够空间容纳源字符串

    // 使用strcpy函数进行字符串复制
    strcpy(destination, source);

    printf("复制后的字符串: %s\n", destination);

    return 0;
}