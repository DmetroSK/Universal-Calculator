#include<stdio.h>
int main()
{float g,mt;

    printf("Enter the mas in metric tones : ");
    scanf("%f",&mt);
    g = mt *1000000;
    printf("%.2f mt = %.2f g",mt,g);
    return 0;
}


