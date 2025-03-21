#include <stdio.h>
// 代码1
struct S1
{
    char c1;
    int i;
    char c2;
};

// 代码2
struct S2
{
    char c1;
    char c2;
    int i;
};

// 代码3
struct S3
{
    double d;
    char c;
    int i;
};
int main()
{

    printf("struct1 = %zu\n", sizeof(struct S1));
    printf("struct2 = %zu\n", sizeof(struct S2));
    printf("struct3 = %zu\n", sizeof(struct S3));
    return 0;
}
