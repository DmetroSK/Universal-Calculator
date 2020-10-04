#include<stdio.h>
int main()
{float mg,g;
    printf("Enter the mas in milligrams : ");
    scanf("%f",&mg);
    g = mg/1000;
    printf("%.2f mg = %.3f g",mg,g);
}
