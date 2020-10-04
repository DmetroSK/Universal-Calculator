#include <stdio.h>

void main()
{
   long int num;

   printf("Enter the octal number : ");
   scanf("%ld",&num);

   long int octal,binary[50],decimal = 0, base = 1, reminder,m,i,y;

    while (num > 0)
    {
        reminder = num% 10;
        decimal = decimal + (reminder* base);
        num= num/ 10 ;
        base = base * 8;
    }

    {
        int m=decimal;
        i=1;
        while(m>0)
        {

         binary[i]=m%2;
         m=m/2;
         i++;

        }
    printf("\nBinary number : ",octal);
    for(y=i-1;y>0;y--)
    {
    printf("%d",binary[y]);
    }
    }
}

