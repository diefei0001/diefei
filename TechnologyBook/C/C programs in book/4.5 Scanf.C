#include <stdio.h>
int main (void)
{
    int number;
    float number1 ,number2 ;
    char newstr[30]  ;
    scanf("%d",&number);
    printf("%d\n",number);
    scanf("%f %E",&number1,&number2);
    printf("%.2f,%.2E\n",number1,number2);
    scanf("%s",newstr);
    printf("%s\n",newstr);
    scanf("%s %d",newstr,&number);
    printf("%s %d\n",newstr,number);
    scanf ("%*s %d",&number);
    printf("%d\n",number);    
}