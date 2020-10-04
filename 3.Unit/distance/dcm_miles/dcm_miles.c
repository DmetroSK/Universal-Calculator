#include<stdio.h>
int main()
{float m, cm;
    printf("Enter the distance in centimeters : ");
    scanf("%f",&cm);
    while(cm!=-99)
    {
         m = cm /160934;
    printf("The equivalent distance in miles is : %f\n\n",m);
    printf("Enter the distance in centimeters : ");
    scanf("%f",&cm);

    }

return 0;
}
