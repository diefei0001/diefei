#include <stdio.h>

int main(void)
{
    int i =2147483647;
    /*2147483647*/
    unsigned int j = 4294967295;
    printf("%d,%d,%d\n",i,i+1,i+2);
    printf("%u,%u,%u\n",j,j+1,j+2);
    float num = 3.4e38;
    float num_toobig = num*100.0f;
    printf("%e\n",num_toobig);
}