
#include<stdio.h>
int main()
{float mm, cm;
    printf("Enter the distance in millimeters : ");
    scanf("%f",&mm);

         cm = mm /10;
    printf("%.2f mm = %.1f cm\n\n",mm,cm);

return 0;
}
