#include <stdio.h>
#define Book "War and Peace"
int main(void)
{
    float cost = 12.99;
    float percent = 80.0 ;
    printf("This copy of \"%s\" sells for $%.2f.\n\
That is %.0f %% of list.",Book,cost,percent);
}