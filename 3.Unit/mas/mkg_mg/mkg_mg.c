#include<stdio.h>
int main()
{float kg,mg;
    printf("Enter the mas in kilograms : ");
    scanf("%f",&kg);
    mg = kg*1000000;
    printf("%.2f kg = %.2f mg\n\n",kg,mg);
    return 0;
}


