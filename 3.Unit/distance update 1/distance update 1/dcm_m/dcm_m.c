#include<stdio.h>
int main()
{float m, cm;
    printf("Enter the distance in centimeters : ");
    scanf("%f",&cm);

         m = cm /100;
    printf("%.2f cm = %.2f m\n\n",cm,m);



return 0;
}
