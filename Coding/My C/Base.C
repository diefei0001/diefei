#include <stdio.h>

int main(void)
{
    int num1 = 0xACF;
    int num2 = 0b00110011;
    int num3 = 03476;
    int num = 100 ;
    printf("十进制：%d 八进制:%08o 十六进制:%08x\n",num ,num,num );
    printf("十进制：%d 八进制:%#08o 十六进制:%#x\n",num ,num,num );
    printf("%d,%d,%d",num1,num2,num3);
}
prinf