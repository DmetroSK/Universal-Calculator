#include<stdio.h>
int main()
{float m, mm;
    printf("Enter the distance in millimeters : ");
    scanf("%f",&mm);
    while(mm!=-99)
    {
         m = mm /1000;
    printf("The equivalent distance in meters is : %f\n\n",m);
    printf("Enter the distance in meters : ");
    scanf("%f",&m);

    }

return 0;
}

