#include<stdio.h>
#include<math.h>

main()
{


  float x,y,z,a;

    printf("Enter tan inverse value: ");
    scanf("%f",&x);
    y=atan( x );
    a=180*7;
    a=a/22;
    z=y*a;

    printf("\ntan inverse(%.2f) = %.2f degree",x,ceil(z));
    printf("\n%.2f degree = %.2f radian",z,y);

}
