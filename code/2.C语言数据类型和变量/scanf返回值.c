#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    float f = 0.0f;
    int r = scanf("%d %d %f", &a, &b, &f);
    printf("a=%d b=%d f=%f\n", a, b, f);
    printf("r = %d\n", r);
    return 0;
}