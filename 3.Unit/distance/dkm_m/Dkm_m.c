#include<stdio.h>
int main()
{float km, m;
    printf("Enter the distance in kilometers : ");
    scanf("%f",&km);
    while(km!=-99)
    {
         m = km * 1000;
    printf("The equivalent distance in meters is : %f\n\n",m);
    printf("Enter the distance in kilometers : ");
    scanf("%f",&km);

    }

return 0;
}
