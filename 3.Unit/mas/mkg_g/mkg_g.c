#include<stdio.h>
int main()
{float kg,g;
    printf("Enter the mas in kilograms : ");
    scanf("%f",&kg);
    g = kg*1000;
    printf("%.2f kg = %.2f g",kg,g);
    return 0;
}
