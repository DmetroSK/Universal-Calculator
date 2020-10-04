#include<stdio.h>
int main()
{float mm, km;
    printf("Enter the distance in millimeters : ");
    scanf("%f",&mm);
    while(mm!=-99)
    {
         km = mm /1000000;
    printf("The equivalent distance in kilometers is : %f\n\n",km);
    printf("Enter the distance in millimeters : ");
    scanf("%f",&mm);

    }

return 0;
}


