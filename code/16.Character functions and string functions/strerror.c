#include <stdio.h>
#include <string.h>
#include <errno.h> // 包含 errno 定义

int main()
{
    FILE *fp = fopen("nonexistent_file.txt", "r");
    if (fp == NULL)
    {
        // 通过 errno 获取错误码，用 strerror 转换为错误信息
        printf("打开文件失败：%s\n", strerror(errno));
    }
    return 0;
}