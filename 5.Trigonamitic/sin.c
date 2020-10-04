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
    y=sin( z );
    printf("\nsin(%.2f) = %.2f",x,y);
    printf("\n%.2f degree = %.2f radian",x,z);
return 0;
}
