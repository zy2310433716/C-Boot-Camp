cmake_minimum_required(VERSION 3.26)
project(C_Boot_Camp C)

set(CMAKE_C_STANDARD 11)

add_executable(C_Boot_Camp
        "code/10.深入理解指针(1)/test.c"
        "code/10.深入理解指针(1)/创建变量.c"
        "code/10.深入理解指针(1)/取地址.c"
        "code/10.深入理解指针(1)/指针+-.c"
        "code/10.深入理解指针(1)/指针变量.c"
        "code/10.深入理解指针(1)/指针变量的大小.c"
        "code/10.深入理解指针(1)/解引用操作符.c"
        code/2.C语言数据类型和变量/+-运算.c
        code/2.C语言数据类型和变量/printf.c
        code/2.C语言数据类型和变量/printf限制宽度.c
        code/2.C语言数据类型和变量/same_name.c
        code/2.C语言数据类型和变量/scanf_限制读取长度.c
        code/2.C语言数据类型和变量/scanf返回值.c
        code/2.C语言数据类型和变量/sizeof.c
        code/2.C语言数据类型和变量/sizeof不计算.c
        code/2.C语言数据类型和变量/乘法运算.c
        code/2.C语言数据类型和变量/全局变量和局部变量.c
        code/2.C语言数据类型和变量/前置++.c
        code/2.C语言数据类型和变量/前置--.c
        code/2.C语言数据类型和变量/取模运算.c
        code/2.C语言数据类型和变量/后置++.c
        code/2.C语言数据类型和变量/后置--.c
        code/2.C语言数据类型和变量/强制类型转换.c
        code/2.C语言数据类型和变量/打印成绩.c
        code/2.C语言数据类型和变量/数据类型长度.c
        code/2.C语言数据类型和变量/显示正负号.c
        code/2.C语言数据类型和变量/负号.c
        code/2.C语言数据类型和变量/赋值忽略符.c
        code/2.C语言数据类型和变量/输出部分字符串.c
        code/2.C语言数据类型和变量/限制小数位数.c
        code/2.C语言数据类型和变量/除法运算.c
        code/3.分支和循环/1.判断奇数.c
        code/3.分支和循环/10.条件表达式找最大值.c
        code/3.分支和循环/2.判断成年.c
        code/3.分支和循环/4.分支中包含多条语句.c
        code/3.分支和循环/5.嵌套if.c
        code/3.分支和循环/6.判断奇数2.c
        code/3.分支和循环/7.输入年龄判断.c
        code/3.分支和循环/9.条件操作符.c
        code/3.分支和循环/default.c
        code/3.分支和循环/do-while_1.c
        code/3.分支和循环/do_while_2.c
        code/3.分支和循环/for_1.c
        code/3.分支和循环/for_break.c
        code/3.分支和循环/for_continue.c
        code/3.分支和循环/goto.c
        code/3.分支和循环/test.c
        code/3.分支和循环/while_1.c
        code/3.分支和循环/while_break.c
        code/3.分支和循环/while_continue.c
        code/3.分支和循环/多个运算符.c
        code/3.分支和循环/打印工作日.c
        code/3.分支和循环/打印日期.c
        code/3.分支和循环/短路.c
        code/3.分支和循环/计算3的余数_1.c
        code/3.分支和循环/计算3的余数_2.c
        code/3.分支和循环/逻辑与运算符.c
        code/3.分支和循环/逻辑取反操作符.c
        code/3.分支和循环/逻辑或操作符.c
        code/3.分支和循环/闰年的判断.c
        code/4.数组/下标.c
        code/4.数组/二维数组的下标.c
        code/4.数组/二维数组的存储.c
        code/4.数组/二维数组的输入和输出.c
        code/4.数组/元素的打印.c
        code/4.数组/数组的存储.c
        code/4.数组/数组的输入.c
        code/4.数组/计算数组元素的个数.c
        code/4.数组/计算数组的大小.c
        code/5.函数/fun_add.c
        code/5.函数/printf.c
        code/5.函数/sqrt.c
        code/5.函数/strlen.c
        code/5.函数/test.c
        code/5.函数/数组传参.c
        code/5.函数/闰年的判断.c
        code/8.函数递归/easy_递归.c
        code/8.函数递归/n的阶乘.c
        code/8.函数递归/n的阶乘_2.c
        code/8.函数递归/打印数字.c
        code/8.函数递归/斐波那契.c
        code/8.函数递归/斐波那契_count.c
        code/8.函数递归/斐波那契_迭代.c
        code/9.操作符详解/函数调用操作符.c
        code/9.操作符详解/右移操作符.c
        code/9.操作符详解/左移操作符.c
        code/9.操作符详解/结构体.c
        code/9.操作符详解/结构体直接访问.c
        code/9.操作符详解/结构声明.c
        code/9.操作符详解/表达式4.c
        code/9.操作符详解/表达式5.c
        code/9.操作符详解/逗号表达式.c
        homework/3.分支和循环/3的倍数和.c
        homework/3.分支和循环/99乘法表.c
        homework/3.分支和循环/rand.c
        homework/3.分支和循环/X形图案.c
        homework/3.分支和循环/三角形的判断.c
        homework/3.分支和循环/倒序打印.c
        homework/3.分支和循环/分数求和.c
        homework/3.分支和循环/打印素数.c
        homework/3.分支和循环/找素数.c
        homework/3.分支和循环/数9的个数.c
        homework/3.分支和循环/最大公约数.c
        homework/3.分支和循环/求最大值.c
        homework/3.分支和循环/猜数字游戏.c
        homework/3.分支和循环/猜数字游戏_2.c
        homework/3.分支和循环/计算整数的位数.c
        homework/3.分支和循环/闰年的判断.c
        homework/3.分支和循环/随机数生成.c
        homework/4.数组/二分查找.c
        homework/4.数组/交换数组.c
        homework/4.数组/字符汇聚.c
        homework/4.数组/有序序列合并.c
        homework/4.数组/求平均值.c
        homework/4.数组/矩阵转置.c
        homework/4.数组/遍历查找.c
        homework/5.函数/99乘法表.c
        homework/5.函数/二分查找.c
        homework/5.函数/判断素数.c
        homework/5.函数/判断闰年.c
        homework/5.函数/数组操作.c
        "code/10.深入理解指针(1)/指针+整数.c")
