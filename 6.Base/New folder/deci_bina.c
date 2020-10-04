#include<stdio.h>
#include<math.h>

void main()
{
long int num;


 printf("Enter the decimal number : ");
 scanf("%ld",&num);

long int reminder[50],i=0,length=0;

while(num>0)
   {
      reminder[i]=num%2;
      num=num/2;
      i++;
      length++;
   }

printf("Binary number : ");
for(i=length-1;i>=0;i--)
  {
    printf("%ld",reminder[i]);
  }

}
