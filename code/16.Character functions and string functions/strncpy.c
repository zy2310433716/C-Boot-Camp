#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "hello";
    char dest[10] = {0}; // 初始化目标数组
    // 复制前3个字符
    strncpy(dest, src, 3);
    printf("复制结果：%s\n", dest); // 输出：hel
    return 0;
}