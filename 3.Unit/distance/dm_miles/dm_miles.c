#include<stdio.h>
int main()
{float m, mi;
    printf("Enter the distance in meters : ");
    scanf("%f",&m);
    while(m!=-99)
    {
         mi = m /1609.34;
    printf("The equivalent distance in miles is : %.9f\n\n",mi);
    printf("Enter the distance in meters : ");
    scanf("%f",&m);

    }

return 0;
}
