#include <stdio.h>

int main(void)
{
    int num = 100 ;
    printf("十进制：%d 八进制:%08o 十六进制:%08x\n",num ,num,num );
    printf("十进制：%d 八进制:%#08o 十六进制:%#x",num ,num,num );
}