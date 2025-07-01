#include <stdio.h>
int main(void)
{
    int number1 = 071;
    char str1[30] = "to day is a good day";
    printf("%*o %8.*s",3,number1,8,str1);
}