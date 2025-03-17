#include <stdio.h>
#include <stdlib.h>

// 自定义的整数比较函数，用于 qsort 函数确定元素的顺序
// 参数 p1 和 p2 是两个指向待比较元素的 const void * 类型指针
// 这种类型的指针可以指向任意类型的数据，以便让 qsort 函数具有通用性
int compar_int(const void *p1, const void *p2)
{
    // 将 const void * 类型的指针 p1 强制转换为 const int * 类型的指针 pa
    // 因为我们知道要比较的是整数，所以进行这样的转换，方便后续访问整数数据
    // const 修饰表示不会通过这个指针修改所指向的整数的值
    const int *pa = (const int *)p1;
    // 同理，将 p2 转换为 const int * 类型的指针 pb
    const int *pb = (const int *)p2;

    // 比较 pa 和 pb 所指向的整数的值
    if (*pa < *pb)
    {
        // 如果 pa 指向的整数小于 pb 指向的整数
        // 返回 -1 表示 pa 指向的元素应该排在 pb 指向的元素之前
        return -1;
    }
    else if (*pa > *pb)
    {
        // 如果 pa 指向的整数大于 pb 指向的整数
        // 返回 1 表示 pa 指向的元素应该排在 pb 指向的元素之后
        return 1;
    }
    else
    {
        // 如果 pa 指向的整数等于 pb 指向的整数
        // 返回 0 表示两个元素的顺序可以任意
        return 0;
    }
}

// 自定义的函数，用于打印数组中的元素
// 参数 arr 是一个整数数组，sz 是数组的元素个数
void printf_arr(int arr[], int sz)
{
    // 使用 for 循环遍历数组中的每个元素
    for (int i = 0; i < sz; i++)
    {
        // 打印当前元素，并在后面添加一个空格
        printf("%d ", arr[i]);
    }
    // 打印完所有元素后，换行，使输出更清晰
    printf("\n");
}

int main()
{
    // 定义一个整数数组，并初始化元素
    int arr[] = {2, 4, 6, 8, 1, 3, 9, 0, 7, 5};
    // 计算数组的元素个数
    // sizeof(arr) 得到整个数组占用的字节数
    // sizeof(arr[0]) 得到数组中一个元素占用的字节数
    // 两者相除就得到了数组的元素个数
    int sz = sizeof(arr) / sizeof(arr[0]);

    // 输出提示信息，表明下面输出的是排序前的数组
    printf("排序前：");
    // 调用自定义的打印函数，打印排序前的数组
    printf_arr(arr, sz);

    // 调用标准库中的 qsort 函数对数组进行排序
    // 第一个参数 arr 是要排序的数组的首地址
    // 第二个参数 sz 是数组的元素个数
    // 第三个参数 sizeof(arr[0]) 是数组中每个元素占用的字节数
    // 第四个参数 compar_int 是自定义的比较函数的函数名，qsort 会根据这个函数来确定元素的顺序
    qsort(arr, sz, sizeof(arr[0]), compar_int);

    // 输出提示信息，表明下面输出的是排序后的数组
    printf("排序后：");
    // 调用自定义的打印函数，打印排序后的数组
    printf_arr(arr, sz);

    // 程序正常结束，返回 0
    return 0;
}