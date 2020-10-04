#include<stdio.h>
int main()
{float mg,mt;

    printf("Enter the mas in metric tones : ");
    scanf("%f",&mt);
    mg = mt /1000000000;
    printf("%.2f mt = %.9f mg",mt,mg);
    return 0;
}

