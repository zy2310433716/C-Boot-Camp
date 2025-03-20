#include <stdio.h>
#include <string.h>

// 定义学生结构体
struct Student
{
    char name[20];
    int age;
    float score;
};

int main()
{
    // 定义包含3个学生信息的结构体数组，并初始化
    struct Student students[3] =
        {
            {"张三", 20, 85.5},
            {"李四", 21, 90.0},
            {"王五", 19, 88.0}};

    // 遍历结构体数组，输出学生信息
    for (int i = 0; i < 3; i++)
    {
        printf("姓名：%s,年龄：%d,成绩：%.1f\n", students[i].name, students[i].age, students[i].score);
    }

    return 0;
}