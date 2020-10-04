#include<stdio.h>
int main()
{float km, m;
    printf("Enter the distance in meters : ");
    scanf("%f",&m);

         km = m/1000;
    printf("%.2f m = %.3f km\n\n",m,km);
return 0;
}
