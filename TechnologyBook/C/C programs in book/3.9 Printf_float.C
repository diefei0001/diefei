# include <stdio.h>
int main(void)
{
    float float_number;
    printf("please enter a float");
    scanf("%f",&float_number);
    printf("%.6f",float_number);
    printf("%e",float_number);
    printf("%a",float_number);
}