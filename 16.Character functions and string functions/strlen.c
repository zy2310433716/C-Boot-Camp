#include <stdio.h>
#include <string.h>
int main()
{
    char arr1[3] = {'a', 'b', 'c'};
    char arr2[] = "abc";
    printf("%zu\n", strlen(arr1));
    printf("%zu\n", strlen(arr2));
    printf("%zu\n", sizeof(arr1));
    printf("%zu\n", sizeof(arr2));
    return 0;
}