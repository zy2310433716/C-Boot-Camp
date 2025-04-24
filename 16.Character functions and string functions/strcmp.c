#include <stdio.h>
#include <string.h>

int main()
{
    char arr1[] = "book";
    char arr2[] = "box";

    int result = strcmp(arr1, arr2);
    if (result < 0)
    {
        printf("字符串 \"%s\" 小于字符串 \"%s\"\n", arr1, arr2);
    }
    else if (result > 0)
    {
        printf("字符串 \"%s\" 大于字符串 \"%s\"\n", arr1, arr2);
    }
    else
    {
        printf("字符串 \"%s\" 等于字符串 \"%s\"\n", arr1, arr2);
    }
    return 0;
}