#include <stdio.h>

int calculate_for_time (void);

int main(void)
{
    float speed ;
    float size ;    
    float time ;
    printf("please enter your speed (Mb/s) and your file size (Mb)\n");
    scanf("%f %f",&speed,&size);
    time = size / speed ;
    printf("At %.2f megabits per second , a file of %.2f\n\
downloads in %.2fs",speed,size,time);
}
