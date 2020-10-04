#include<stdio.h>
int main()
{float g,mt;

    printf("Enter the mas in grams : ");
    scanf("%f",&g);
    mt = g /1000000;
    printf("%.2f g = %.6f mt",g,mt);
    return 0;
}

