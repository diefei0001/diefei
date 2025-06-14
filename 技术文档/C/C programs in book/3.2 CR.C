#include <stdio.h>
int main()
{
    char ch ;
    ch ='\r';
    printf("1%c",ch);
    ch = 13;
    printf("1%c\n",ch);
    ch = '\015';
    printf("1%c\n",ch);
    ch = '\x0D';
    printf("2%c\n",ch);
    return 0;
}