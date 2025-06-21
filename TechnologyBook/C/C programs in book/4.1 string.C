#include <stdio.h>
#include <string.h>
#define Praise "you are a good man"
int main(void)
{
    char name[15];
    scanf("%s",name);
    printf("%s,%s",name,Praise);
    printf("your name has %zd chars and take %zd bytes",strlen(name),sizeof(name));
}