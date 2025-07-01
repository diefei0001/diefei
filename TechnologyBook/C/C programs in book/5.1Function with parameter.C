#include <stdio.h>
int calculator (int x);
int main (void)
{
    int y =2 ;
    printf("%d,%d\n",y,calculator(2));
}

int calculator (int x)
{
    int y = 1 ;
    printf("%d\n",y);
    while (x++ < 3)
    {
        y = x*x;
    }
    return y;
}