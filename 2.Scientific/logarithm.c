#include<stdio.h>
#include<math.h>

main()
{
    float x;

    printf("Enter number you want to find log10(x) : ");
    scanf("%f",&x);

    printf("\nlog10(%.2f) = %.2f",x,log10(x));
}
