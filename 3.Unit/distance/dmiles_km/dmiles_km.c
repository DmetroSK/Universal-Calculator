#include<stdio.h>
int main()
{float m, km;
    printf("Enter the distance in miles : ");
    scanf("%f",&m);
    while(m!=-99)
    {
         km = m *1.60934;
    printf("The equivalent distance in kilometers is : %f\n\n",km);
    printf("Enter the distance in miles : ");
    scanf("%f",&m);

    }

return 0;
}
