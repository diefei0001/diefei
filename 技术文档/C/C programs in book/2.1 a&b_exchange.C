#include <stdio.h>
int main ()
{
    int a,b;
    int x,y;
    a = 100;
    b = 200;
    b =a ;
    a =b;
    printf("%d,%d\n",a,b);
    x = 10;
    y =5;
    y = x+y;
    x = x*y;
    printf("%d,%d",x,y);
}