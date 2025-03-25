#include <stdio.h>

// 使用反斜杠实现 #define 换行定义
#define DEBUG_PRINT                     \
    printf("文件路径：%s\n", __FILE__); \
    printf("当前行号：%d\n", __LINE__); \
    printf("编译日期：%s\n", __DATE__); \
    printf("编译时间：%s\n", __TIME__);

int main()
{
    DEBUG_PRINT; // 预处理后会合并为连续的代码
    return 0;
}