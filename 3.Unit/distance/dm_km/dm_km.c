#include<stdio.h>
int main()
{float km, m;
    printf("Enter the distance in meters : ");
    scanf("%f",&m);
    while(m!=-99)
    {
         km = m/1000;
    printf("The equivalent distance in kilometers is : %f\n\n",km);
    printf("Enter the distance in meters : ");
    scanf("%f",&m);

    }

return 0;
}
