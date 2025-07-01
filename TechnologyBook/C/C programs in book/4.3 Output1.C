#include <stdio.h>
int main (void)
{
    int number1 = 109;
    int number2 = 0x8A;
    float number3 =232.346;
    float number4 =2.33e+002;
    char str1[21] = "to day is a good day";
    printf("%3d\n %4X \n %10.3f\n %12.3e\n %-30s\n",number1,number2,number3,number4,str1);
}