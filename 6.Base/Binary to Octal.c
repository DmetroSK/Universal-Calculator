#include<stdio.h>
int main()
{
    int x,y,z,Octal,Binary[20];
    printf("Binary Number : ");
    scanf("%d",&Octal);
    int n=Octal;
    x=1;
    while(Octal>0)
    {
        z=Octal%8;
    Binary[x]=z;
    Octal=Octal/8;
    x++;

    }
    printf("\nOctal of %d is : ",n);
    for(y=x-1;y>0;y--)
    {
    printf("%d",Binary[y]);
    }

    return 0;
    }
