#include<stdio.h>
int main()
{float kg,g;
    printf("Enter the mas in grams : ");
    scanf("%f",&g);
    kg = g/1000;
    printf("%.2f g = %.3f kg\n\n",g,kg);
    return 0;
}

