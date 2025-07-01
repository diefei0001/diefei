#include <stdio.h>
#include <string.h>
int main (void)
{
    char first_name[10];
    char last_name[10];
    printf("please enter your first name\n");
    scanf("%s",first_name);
    printf("please enter your last name\n");
    scanf("%s",last_name);
    printf("%s %s\n",first_name,last_name);
    printf("%*d %*d\n",
             strlen(first_name),strlen(first_name),
            (strlen(last_name)),strlen(last_name)
          );
    printf("%s %s\n",first_name,last_name);
    printf("%-*d %-*d",
            strlen(first_name),strlen(first_name),
            (strlen(last_name)),strlen(last_name)
          );
    
}