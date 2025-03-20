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
    struct Student stu = {"小明", 20, 92.5};
    struct Student *ptr = &stu; // 定义结构体指针并指向stu

    // 通过结构体指针访问并输出学生信息
    printf("姓名：%s,年龄：%d,成绩：%.1f\n", ptr->name, ptr->age, ptr->score);

    return 0;
}