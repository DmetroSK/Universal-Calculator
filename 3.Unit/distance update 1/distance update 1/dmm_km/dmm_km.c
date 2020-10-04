#include<stdio.h>
int main()
{float mm, km;
    printf("Enter the distance in millimeters : ");
    scanf("%f",&mm);

         km = mm /1000000;
    printf("%.2f mm = %f km\n\n",mm,km);


return 0;
}


