#include <stdio.h>
int main(void)
{
    int a ,b ,c ,d ,e ,f ,result;
    bool g = true;
    a = 1;
    b = 2;
    c = 3;
    d = 4;
    e = 5;
    f = 6;
    result=a + b > c * d && e != f || !g;
    printf("%d",result);
}