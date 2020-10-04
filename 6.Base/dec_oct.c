#include<stdio.h>
#include<math.h>

void dec_oct(long int num)
{
long int reminder[50],i=0,length=0;

while(num>0)
   {
      reminder[i]=num%8;
      num=num/8;
      i++;
      length++;
   }

printf("Octal number : ");
for(i=length-1;i>=0;i--)
  {
    printf("%ld",reminder[i]);
  }
}

void main()
{
long int num;


 printf("Enter the decimal number : ");
 scanf("%ld",&num);

    dec_oct(num);


}
