#include<stdio.h>
int main()
{float m, km;
    printf("Enter the distance in miles : ");
    scanf("%f",&m);

         km = m *1.60934;
    printf("%.2f miles = %.2f km\n\n",m,km);

return 0;
}
