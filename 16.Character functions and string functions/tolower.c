#include <stdio.h>
#include <ctype.h>

int main()
{
    char arr[] = "Hello, WORLD!";
    int i = 0;
    while (arr[i])
    {
        arr[i] = tolower(arr[i]);
        i++;
    }
    printf("%s\n", arr);
    return 0;
}