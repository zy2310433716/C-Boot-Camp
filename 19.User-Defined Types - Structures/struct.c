#include <stdio.h>
#include <string.h>
struct Student
{
    char name[20];
    int age;
    char sex[5];
    float score;
};

int main()
{
    // 按照结构体成员的顺序初始化
    struct Student stu1 = {"张三", 20, "男", 89.0};
    // 按照指定的顺序初始化
    printf("修改前：\n");
    printf("姓名：%s ,年龄：%d ,性别：%s ,成绩：%f\n", stu1.name, stu1.age, stu1.sex, stu1.score);

    // 修改结构成员
    strcpy(stu1.name, "小灯");
    stu1.age = 17;
    printf("修改后：\n");
    printf("姓名：%s ,年龄：%d ,性别：%s ,成绩：%f\n", stu1.name, stu1.age, stu1.sex, stu1.score);

    return 0;
}