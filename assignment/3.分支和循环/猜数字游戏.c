#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
    printf("********************\n");
    printf("***** 1. play ******\n");
    printf("***** 0. exit ******\n");
    printf("********************\n");
}

void game()
{
    int r = rand() % 100 + 1;
    int guess = 0;
    while (1)
    {
        printf("请猜数字：");
        scanf("%d", &guess);
        if (guess < r)
        {
            printf("猜小了\n");
        }
        else if (guess > r)
        {
            printf("猜大了\n");
        }
        else
        {
            printf("恭喜你，猜对了\n");
            break;
        }
    }
}

int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("请做出你的选择\n");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("游戏结束\n");
            break;
        default:
            printf("选择错误\n");
        }
    } while (input);
    return 0;
}