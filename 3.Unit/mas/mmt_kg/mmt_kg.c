#include<stdio.h>
int main()
{float kg,mt;
    printf("Enter the mas in Metric tones : ");
    scanf("%f",&mt);
    kg = mt*1000;
    printf("%.2f mt = %.2f kg\n\n",mt,kg);
    return 0;
}



