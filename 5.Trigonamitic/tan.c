#include<stdio.h>
#include<math.h>

main()
{


  float x,y,z,a;

    printf("Enter angle : ");
    scanf("%f",&x);
    a=22/7;
    a=a/180;
    z=x*a;
    y=tan(z);
    printf("\ntan(%.2f) = %.2f",x,y);
    printf("\n%.2f degree = %.2f radian",x,z);

}

