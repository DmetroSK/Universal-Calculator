#include<stdio.h>
int main()
{float m, km;
    printf("Enter the distance in kilometers : ");
    scanf("%f",&km);

         m = km /1.60934;
    printf("%.2f km = %.2f miles\n\n",km,m);

return 0;
}


