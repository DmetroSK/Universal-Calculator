#include<stdio.h>

int main()
{ float z,t=0;
int x,y;
    printf("How many Number you will add : ");
    scanf("%d",&x);
    if(x>=2)
    {
      for(y=0;y<x;y++)
      {
          printf("Enter Number : ");
          scanf("%f",&z);
          t=t+z;
          }
          printf("Answer = %.2f",t);
      }
      else
        {
            printf("Please Enter minimum two Numbers");
        }


   return 0;
}
