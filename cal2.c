#include<stdio.h>

int main()
{ float z,m=1;
int x,y;
    printf("How many Number you will Multiply : ");
    scanf("%d",&x);
    if(x>=2)
    {
      for(y=0;y<x;y++)
      {
          printf("Enter Number : ");
          scanf("%f",&z);

          m=m*z;
          }
          printf("Answer = %.2f",m);
      }
      else
        {
            printf("Please Enter minimum two Numbers");
        }


   return 0;
}

