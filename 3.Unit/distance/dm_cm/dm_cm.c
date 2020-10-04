#include<stdio.h>
int main()
{float cm, m;
    printf("Enter the distance in meters : ");
    scanf("%f",&m);
    while(m!=-99)
    {
         cm = m *100;
    printf("The equivalent distance in centimeters is : %f\n\n",cm);
    printf("Enter the distance in meters : ");
    scanf("%f",&m);

    }

return 0;
}
