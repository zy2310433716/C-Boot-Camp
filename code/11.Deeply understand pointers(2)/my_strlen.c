#include <stdio.h>
#include <assert.h>

// 自定义函数 my_strlen，用于计算字符串的长度
// 参数 str 是一个指向常量字符的指针，使用 const 修饰表示不会通过该指针修改所指向的字符串内容
int my_strlen(const char *str)
{
    // 用于记录字符串中字符的数量，初始化为 0
    int count = 0;

    // 使用 assert 宏来确保传入的指针不为空
    // 如果 str 为 NULL，程序会触发断言错误并终止，避免对空指针进行操作
    assert(str != NULL);

    // 注释有误，这里应该是 '\0' 而不是 '/0'，'\0' 是字符串的结束标志，其 ASCII 码值为 0
    // 只要指针 str 所指向的字符不是字符串结束标志 '\0'，就进入循环
    while (*str)
    {
        // 每遇到一个字符，计数器 count 加 1
        count++;
        // 指针 str 向后移动一个字符的位置，指向下一个字符
        str++;
    }

    // 循环结束后，count 中存储的就是字符串的长度，将其作为函数的返回值
    return count;
}

int main()
{
    // 调用自定义的 my_strlen 函数，计算字符串 "abcdef" 的长度
    // 将计算结果存储在变量 len 中
    int len = my_strlen("abcdef");

    // 使用 printf 函数输出字符串的长度
    printf("%d\n", len);

    // 程序正常结束，返回 0
    return 0;
}