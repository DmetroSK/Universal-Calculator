#include<stdio.h>
int main()
{float m, mm;
    printf("Enter the distance in millimeters : ");
    scanf("%f",&mm);

         m = mm /1000;
    printf("%.2f mm = %.3f m\n\n",mm,m);

return 0;
}

