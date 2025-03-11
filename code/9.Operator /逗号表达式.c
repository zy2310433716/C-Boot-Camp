// 代码1
int a = 1;
int b = 2;
int c = (a > b, a = b + 10, a, b = a + 1); // 逗号表达式
c是多少？
    // 代码2
    if (a = b + 1, c = a / 2, d > 0)
    // 代码3
    a = get_val();
count_val(a);
while (a > 0)
{
    // 业务处理
    //...
    a = get_val();
    count_val(a);
}
如果使用逗号表达式，改写：
while (a = get_val(), count_val(a), a > 0)
{
    // 业务处理
}
