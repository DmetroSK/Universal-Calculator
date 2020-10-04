#include<stdio.h>

void main()
{
    float mm, cm;
    printf("Enter the distance in millimeters : ");
    scanf("%f",&mm);
    cm = mm /10;
    printf("%.2f mm = %.2f cm\n\n",mm,cm);

}
