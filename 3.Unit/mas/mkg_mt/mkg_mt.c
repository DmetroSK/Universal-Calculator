#include<stdio.h>
int main()
{float kg,mt;
    printf("Enter the mas in kilograms : ");
    scanf("%f",&kg);
    mt = kg*1000;
    printf("%.2f kg = %.2f mt\n\n",kg,mt);
    return 0;
}


