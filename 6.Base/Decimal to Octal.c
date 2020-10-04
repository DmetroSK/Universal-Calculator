#include<stdio.h>
int main()
{
    int x,y,z,Decimal,Octal[20];
    printf("Decimal Number : ");
    scanf("%d",&Decimal);
    int n=Decimal;
    x=1;
    while(Decimal>0)
    {
        z=Decimal%8;
    Octal[x]=z;
    Decimal=Decimal/8;
    x++;

    }
    printf("\nOctal of %d is : ",n);
    for(y=x-1;y>0;y--)
    {
    printf("%d",Octal[y]);
    }

    return 0;
    }
