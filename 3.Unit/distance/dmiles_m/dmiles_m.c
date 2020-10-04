#include<stdio.h>
int main()
{float m, mi;
    printf("Enter the distance in miles : ");
    scanf("%f",&mi);
    while(mi!=-99)
    {
         m = mi *1609.34;
    printf("The equivalent distance in meters is : %.2f\n\n",m);
    printf("Enter the distance in meters : ");
    scanf("%f",&mi);

    }

return 0;
}
