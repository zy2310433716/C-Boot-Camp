#include <stdio.h>

int main()
{
    int arr[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    double avg = sum / 10.0;
    printf("%lf\n", avg);
}