
#include<stdio.h>
int main()
{float mm, cm;
    printf("Enter the distance in millimeters : ");
    scanf("%f",&mm);
    while(mm!=-99)
    {
         cm = mm /10;
    printf("The equivalent distance in centimeters is : %f\n\n",cm);
    printf("Enter the distance in millimeters : ");
    scanf("%f",&mm);

    }

return 0;
}
