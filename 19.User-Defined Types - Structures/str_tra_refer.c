#include <stdio.h>
struct Student
{
    int id;
    char name[20];
    float score;
};
void print_stu(struct Student stu)
{
    printf("学生ID：%d,姓名：%s,成绩：%.2f\n", stu.id, stu.name, stu.score);
}

int main()
{
    struct Student stu1 = {1, "小登", 66.6};
    print_stu(stu1);
    return 0;
}