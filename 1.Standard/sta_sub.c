#include<stdio.h>

int main()
{ float z,m;
int x,y=1;
    printf("How many Number you will Subtraction : ");
    scanf("%d",&x);
    if(x>=2)
    {
        printf("Enter Number : ");
          scanf("%f",&z);
          m=z;
      do
      {
          printf("Enter Number : ");
          scanf("%f",&z);
          m=m-z;
          y++;
          }
          while(y<x);
          printf("Answer = %.2f",m);
      }

      else
        {
            printf("Please Enter minimum two Numbers");
        }
    return 0;
}

