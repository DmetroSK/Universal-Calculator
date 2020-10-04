#include <stdio.h>
#include<math.h>

void main()
{
 long int num;

     printf("Enter the binary number : ");
     scanf("%ld", &num);

     long int decimal = 0, base = 1, reminder;

    while (num > 0)
    {
        reminder = num% 10;
        decimal = decimal + (reminder* base);
        num= num/ 10 ;
        base = base * 2;
    }
    printf("Decimal Number :%ld ", decimal);

}
