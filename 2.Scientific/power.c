#include<stdio.h>
#include<math.h>

main()
{int x,y,p;
    printf("Enter Base : ");
    scanf("%d",&x);
    printf("Enter power : ");
    scanf("%d",&y);
    p=pow(x,y);
   printf("Answer is : %d",p);
}
