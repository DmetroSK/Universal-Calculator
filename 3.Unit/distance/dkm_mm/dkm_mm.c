#include<stdio.h>
int main()
{float mm, km;
    printf("Enter the distance in kilometers : ");
    scanf("%f",&km);
    while(km!=-99)
    {
         mm = km *1000000;
    printf("The equivalent distance in millimeters is : %f\n\n",mm);
    printf("Enter the distance in kilometers : ");
    scanf("%f",&km);

    }

return 0;
}

