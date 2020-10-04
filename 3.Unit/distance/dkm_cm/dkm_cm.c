#include <stdio.h>

int main()
{
    float cm,km;

    printf("Enter length in kilometer: ");
    scanf("%f", &km);
    while(km!=-99)
    {
        cm    = km * 100000;
        printf("Length in centimeter = %f km\n\n", cm);
        printf("Enter length in kilometer: ");
        scanf("%f", &km);

    }

    return 0;
}
