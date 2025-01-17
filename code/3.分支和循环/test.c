#include <stdio.h>
#include <ncurses.h> // 用于跨平台控制台操作
#include <unistd.h>  // 用于usleep函数

#define WIDTH 40
#define HEIGHT 20

// 飞机结构体
typedef struct
{
    int x, y;     // 飞机位置
    char body[3]; // 飞机形状
} Plane;

// 子弹结构体
typedef struct
{
    int x, y;
    int active; // 是否激活
} Bullet;

// 初始化飞机
void initPlane(Plane *plane)
{
    plane->x = WIDTH / 2;
    plane->y = HEIGHT - 2;
    plane->body[0] = '^';
    plane->body[1] = '|';
    plane->body[2] = '^';
}

// 绘制游戏界面
void drawGame(Plane plane, Bullet bullets[], int bulletCount)
{
    system("cls"); // 清屏

    // 绘制顶部边界
    for (int i = 0; i < WIDTH + 2; i++)
        printf("#");
    printf("\n");

    // 绘制游戏区域
    for (int y = 0; y < HEIGHT; y++)
    {
        printf("#"); // 左边界
        for (int x = 0; x < WIDTH; x++)
        {
            // 绘制飞机
            if (y == plane.y && (x == plane.x || x == plane.x + 1 || x == plane.x + 2))
            {
                printf("%c", plane.body[x - plane.x]);
                continue;
            }

            // 绘制子弹
            int bulletDrawn = 0;
            for (int i = 0; i < bulletCount; i++)
            {
                if (bullets[i].active && x == bullets[i].x && y == bullets[i].y)
                {
                    printf("*");
                    bulletDrawn = 1;
                    break;
                }
            }
            if (!bulletDrawn)
                printf(" ");
        }
        printf("#\n"); // 右边界
    }

    // 绘制底部边界
    for (int i = 0; i < WIDTH + 2; i++)
        printf("#");
    printf("\n");
}

// 更新子弹位置
void updateBullets(Bullet bullets[], int bulletCount)
{
    for (int i = 0; i < bulletCount; i++)
    {
        if (bullets[i].active)
        {
            bullets[i].y--;
            if (bullets[i].y < 0)
                bullets[i].active = 0;
        }
    }
}

int main()
{
    Plane plane;
    Bullet bullets[10] = {0}; // 最多10发子弹
    int bulletCount = 10;
    int gameOver = 0;

    initPlane(&plane);

    while (!gameOver)
    {
        // 处理输入
        if (_kbhit())
        {
            char key = _getch();
            switch (key)
            {
            case 'a': // 左移
                if (plane.x > 0)
                    plane.x--;
                break;
            case 'd': // 右移
                if (plane.x < WIDTH - 3)
                    plane.x++;
                break;
            case ' ': // 发射子弹
                for (int i = 0; i < bulletCount; i++)
                {
                    if (!bullets[i].active)
                    {
                        bullets[i].x = plane.x + 1;
                        bullets[i].y = plane.y - 1;
                        bullets[i].active = 1;
                        break;
                    }
                }
                break;
            case 'q': // 退出游戏
                gameOver = 1;
                break;
            }
        }

        // 更新游戏状态
        updateBullets(bullets, bulletCount);

        // 绘制游戏界面
        drawGame(plane, bullets, bulletCount);

        // 控制游戏速度
        Sleep(50);
    }

    printf("游戏结束！\n");
    return 0;
}
