#include<stdio.h>
int main()
{
    int x,y,z,Decimal,Binary[20];
    printf("Decimal Number : ");
    scanf("%d",&Decimal);
    int n=Decimal;
    x=1;
    while(Decimal>0)
    {
        z=Decimal%2;
    Binary[x]=z;
    Decimal=Decimal/2;
    x++;

    }
    printf("\nBinary of %d is : ",n);
    for(y=x-1;y>0;y--)
    {
    printf("%d",Binary[y]);
    }

    return 0;
    }
