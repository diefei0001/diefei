#include <stdio.h>

int main(void)
{
    float weight;
    float value;
    printf("Are you worth your weight in platium?\n");
    printf("Let's check it out.\n");
    printf("please enter your weight in pounds: ");

    scanf("%f",&weight);
    value = 1700.0 *weight *14.5833;
    printf("your weight in platinum is worth $%2.f.\n",value);
}