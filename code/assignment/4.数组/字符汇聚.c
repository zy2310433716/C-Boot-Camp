#include <stdio.h>  // 包含标准输入输出库
#include <string.h> // 包含字符串处理库
#include <unistd.h> // 包含Unix标准库，用于usleep函数
#include <stdlib.h> // 包含标准库，用于system函数

int main()
{
    char arr1[] = "I love you!!!"; // 定义并初始化字符串arr1
    char arr2[] = "#############"; // 定义并初始化字符串arr2，初始值为一系列井号
    int left = 0;                  // 定义左下标从0开始
    int right = strlen(arr1) - 1;  // 定义右下标为字符串长度-1
    while (left <= right)          // 当左下标小于等于右下标时循环
    {
        usleep(1000000);           // 休眠1秒
        arr2[left] = arr1[left];   // 将arr1的左下标字符赋值给arr2的左下标位置
        arr2[right] = arr1[right]; // 将arr1的右下标字符赋值给arr2的右下标位置
        system("clear");           // 清屏
        printf("%s\n", arr2);      // 打印当前arr2的内容
        left++;                    // 左下标加1
        right--;                   // 右下标减1
    }
    return 0; // 返回0，表示程序正常结束
}