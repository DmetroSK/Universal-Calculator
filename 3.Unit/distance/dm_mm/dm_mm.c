#include<stdio.h>
int main()
{float m, mm;
    printf("Enter the distance in meters : ");
    scanf("%f",&m);
    while(m!=-99)
    {
         mm = m *1000;
    printf("The equivalent distance in millimeters is : %f\n\n",mm);
    printf("Enter the distance in meters : ");
    scanf("%f",&m);

    }

return 0;
}
