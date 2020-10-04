#include<stdio.h>
int main()
{float m, km;
    printf("Enter the distance in kilometers : ");
    scanf("%f",&km);
    while(km!=-99)
    {
         m = km /1.60934;
    printf("The equivalent distance in miles is : %f\n\n",m);
    printf("Enter the distance in kilometers : ");
    scanf("%f",&km);

    }

return 0;
}


