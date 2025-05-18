#include <stdio.h>

int main(void)
{

    printf("the size of num1 is:%zd bytes.\n",sizeof(int));
    printf("the size of num1 is:%zd bytes.\n",sizeof(float));
    printf("the size of num1 is:%zd bytes.\n",sizeof(char));
    printf("the size of num1 is:%zd bytes.\n",sizeof(long));
    printf("the size of num1 is:%zd bytes.\n",sizeof(short));
    printf("the size of num1 is:%zd bytes.\n",sizeof(long long));
    printf("the size of num1 is:%zd bytes.\n",sizeof(double));
    printf("the size of num1 is:%zd bytes.\n",sizeof(long double));
    printf("the size of num1 is:%zd bytes.\n",sizeof(unsigned));
    printf("the size of num1 is:%zd bytes.\n",sizeof(unsigned long));
    printf("the size of num1 is:%zd bytes.\n",sizeof(unsigned short));
    int num1 = 16 *32l;
    printf("%d",num1);
}