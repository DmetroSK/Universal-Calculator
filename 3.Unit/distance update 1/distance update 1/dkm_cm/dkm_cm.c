#include <stdio.h>

int main()
{
    float cm,km;

    printf("Enter length in kilometer: ");
    scanf("%f", &km);
        cm    = km * 100000;
        printf("%.2f km = %.2f cm\n\n",km, cm);

    return 0;
}
