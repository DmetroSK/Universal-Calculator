#include<stdio.h>
int main()
{float mg,mt;

    printf("Enter the mas in milligrams : ");
    scanf("%f",&mg);
    mt = mg *1000000000;
    printf("%.2f mg = %.2f mt",mg,mt);
    return 0;
}
