#include <stdio.h>
int main(void)
{
    float distance ;
    float gas;
    float use ;
    float dis_per_gal;
    float gal_per_KM;
    const float change_to_L = 3.875;
    const float change_to_KM = 1.609;
    printf("please enter you distrance(Mile) and cost of gas(GAL)\n");
    scanf("%f %f",&distance,&gas);
    dis_per_gal = distance/gas;
    printf("the distance is %f , and the cost of gas is %f GAL\nyou cover %.1f mile per gal\n",
            distance,gas,dis_per_gal);
    gal_per_KM = gas*change_to_L / distance*change_to_KM ;
    printf("the distance is %f , and the cost of gas is %f GAL\nyou use %.1f L in 100KM",distance,gas,gal_per_KM*100);
    
}