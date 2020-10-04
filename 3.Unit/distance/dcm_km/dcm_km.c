#include <stdio.h>

int main()
{
    float cm,km;

    printf("Enter length in centimeter: ");
    scanf("%f", &cm);
    while(cm!=-99)
    {
        km    = cm / 100000;
        printf("Length in Kilometer = %f km\n\n", km);
        printf("Enter length in centimeter: ");
        scanf("%f", &cm);

    }

    return 0;
}
