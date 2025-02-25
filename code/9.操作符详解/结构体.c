// 代码1：变量的定义
struct Point
{
    int x;
    int y;
} p1;            // 声明类型的同时定义变量p1
struct Point p2; // 定义结构体变量p2

// 代码2:初始化。
struct Point p3 = {10, 20};
struct Stu // 类型声明
{
    char name[15]; // 名字
    int age;       // 年龄
};
struct Stu s1 = {"zhangsan", 20};            // 初始化
struct Stu s2 = {.age = 20, .name = "lisi"}; // 指定顺序初始化

// 代码3
struct Node
{
    int data;
    struct Point p;
    struct Node *next;
} n1 = {10, {4, 5}, NULL};           // 结构体嵌套初始化
struct Node n2 = {20, {5, 6}, NULL}; // 结构体嵌套初始化