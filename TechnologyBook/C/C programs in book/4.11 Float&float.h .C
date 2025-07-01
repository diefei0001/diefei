#include <stdio.h>
#include <float.h>
int main (void)
{
    float number1 =1.0/3.0;
    double number2 =1.0/3.0;
    printf("the active digs is %d\n",FLT_DIG);
    printf("%.6f\n %.12f\n %.16f\n",number1,number1,number1);
    printf("the active digs is %d\n",DBL_DIG);
    printf("%.6lf\n %.12lf\n %.20lf\n",number2,number2,number2);
}