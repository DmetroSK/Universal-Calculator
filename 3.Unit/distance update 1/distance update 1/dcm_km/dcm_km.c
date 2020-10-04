#include <stdio.h>

int main()
{
    float cm,km;

    printf("Enter the distance in centimeter: ");
    scanf("%f", &cm);
    km = cm/100000;

    printf("%.2f cm = %.5f km\n\n",cm,km);

    return 0;
}
