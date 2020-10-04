#include<stdio.h>
int main()
{float m, mi;
    printf("Enter the distance in miles : ");
    scanf("%f",&mi);

         m = mi *1609.34;
    printf("%.2f miles = %.2f m\n\n",mi,m);

return 0;
}
