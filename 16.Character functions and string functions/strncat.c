#include <stdio.h>
#include <string.h>

int main()
{
    char dest[20] = "Hi, ";
    char src[] = "Programmer";

    // 拼接源字符串前 7 个字符
    strncat(dest, src, 7);
    printf("拼接结果：%s\n", dest); // 输出：Hi, Progra（自动保留 \0）

    return 0;
}