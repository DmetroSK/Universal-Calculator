#include<stdio.h>
#include<math.h>

void dec_hex(long int num)
{
long int reminder[50],i=0,length=0;

while(num>0)
   {
      reminder[i]=num%16;
      num=num/16;
      i++;
      length++;
   }

printf("\nHexadecimal number : ");
for(i=length-1;i>=0;i--)
  {
    switch(reminder[i])
    {
      case 10:
          printf("A");
          break;
      case 11:
          printf("B");
          break;
      case 12:
          printf("C");
          break;
      case 13:
          printf("D");
          break;
      case 14:
          printf("E");
          break;
      case 15:
          printf("F");
          break;
      default :
         printf("%ld",reminder[i]);
    }
  }
}

void main()
{
long int num;


 printf("Enter the decimal number : ");
 scanf("%ld",&num);

    dec_hex(num);


}
