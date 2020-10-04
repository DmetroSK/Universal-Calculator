#include<stdio.h>
int main()
{float m, mi;
    printf("Enter the distance in meters : ");
    scanf("%f",&m);
         mi = m /1609.34;
    printf("%.2f m = %.9f miles\n\n",m,mi);
return 0;
}
