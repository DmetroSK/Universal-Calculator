#include <stdio.h>
#include<math.h>

void bin_oct(long int num)
{
    long int binary, decimal = 0,octal[50], base = 1, reminder,i,q;
    while (num > 0)
    {
        reminder = num% 10;
        decimal = decimal + (reminder * base);
        num= num/ 10;
        base = base * 2;
    }
    long int m=decimal;
    i=1;
    while(m>0)
    {
        octal[i]=m%8;
        m=m/8;
        i++;
    }
    printf("\nOctal number :",octal);
    for(q=i-1;q>0;q--)
    {
    printf("%ld",octal[q]);
    }
}

void main()
{
    long int num;

    printf("Enter the binary number :");
    scanf("%ld", &num);
    bin_oct(num);
}



