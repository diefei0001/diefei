#include <stdio.h>
#include <string.h>
int main (void)
{
    char name[10];
    char name_part[5] = "\"";
    printf("please enter your first name and last name\n");
    scanf("%10s",name);
    printf("%s%s%s\n",name_part,name,name_part);
    printf("%0*s%s%s\n",20-(strlen(name)+1),name_part,name,name_part);
    printf("%-s%-s%-*s\n",name_part,name,20-(strlen(name)+1),name_part);
    printf("%*s\n",strlen(name), name);
}