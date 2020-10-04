#include<stdio.h>
int main()
{float mm, km;
    printf("Enter the distance in kilometers : ");
    scanf("%f",&km);

         mm = km *1000000;
    printf("%.2f km = %.2f mm\n\n",km,mm);

return 0;
}

