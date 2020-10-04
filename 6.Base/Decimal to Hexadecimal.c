#include<stdio.h>
int main()
{   int x,y,z,Decimal,Hexadecimal[20];
    char Hexavalue[]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    printf("Decimal Number : ");
    scanf("%d",&Decimal);
    int n=Decimal;
    x=1;
    while(Decimal>0)
    {
        z=Decimal%16;
    Hexadecimal[x]=z;
    Decimal=Decimal/16;
    x++;

    }
    printf("\nHexadecimal of %d is : ",n);
    for(y=x-1;y>0;y--)
    {
    printf("%d",Hexadecimal[y]);
    }

    return 0;
    }


