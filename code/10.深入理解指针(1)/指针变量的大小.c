#include <stdio.h>
// 指针变量的大小取决于地址的大小
// 32位平台下地址是32个bit位（即4个字节）
// 64位平台下地址是64个bit位（即8个字节）
int main()
{
    printf("%zd\n", sizeof(char *));
    printf("%zd\n", sizeof(short *));
    printf("%zd\n", sizeof(int *));
    printf("%zd\n", sizeof(double *));
    return 0;
}