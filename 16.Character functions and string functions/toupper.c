#include <stdio.h>
#include <ctype.h>

int main()
{
    char arr[] = "hello, WORLD!";
    int i = 0;
    while (arr[i])
    {
        arr[i] = toupper(arr[i]);
        i++;
    }
    printf("%s\n", arr);
    return 0;
}