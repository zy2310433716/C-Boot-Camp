#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "hello,world;c language"; // 待分割的原始字符串
    char *token;
    char delim[] = ",; "; // 定义分隔符（逗号、分号、空格）

    // 首次调用 strtok
    token = strtok(str, delim);
    while (token != NULL)
    {
        printf("分割后的子串：%s\n", token);
        token = strtok(NULL, delim); // 后续分割
    }
    return 0;
}