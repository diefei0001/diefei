# 两个关于可移植性的头文件
> stdint.h头文件定义了固定宽度的整数类型，确保代码在不同平台上有统一的内存占用
> inttypes.h头文件提供与这些类型匹配的 printf/scanf 格式说明符（如 PRId32）
- [两个头文件增强了C语言程序的可移植性]

# 涉及明示常量的两个头文件
> 提供与系统硬件相关的整型和浮点型数据的范围、精度的常量
#include <stdio.h>
#include <limits.h>

int main() {
    printf("int 范围: %d 到 %d\n", INT_MIN, INT_MAX);
    printf("unsigned int 最大值: %u\n", UINT_MAX);
    return 0;
}
- 通过添加预处理指令，可以[使用该头文件里有关浮点数和整数的重要常量]，例如最大值和最小值。
