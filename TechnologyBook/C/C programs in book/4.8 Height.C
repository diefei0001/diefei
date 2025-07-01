#include <stdio.h>
#define CHANGE = 12
int main (void)
{
    char name[10] ;
    float height ;
    float feet ;
    printf("please enter your height(inch) and name\n");
    scanf("%f %s",&height,name);
    feet = height*12;
    printf("%s , you are %.3f feet tall",name,feet);
}