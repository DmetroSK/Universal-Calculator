#include <stdio.h>
int main()
{
    float z,m;
    int x,y=1;
    printf("how many numbers you will subtraction :");
    scanf("%d",&x);
    if(x>=2)
    {
        printf("enter number :");
        scanf("%f",&z);
        m=z;
        do
        {
            printf("enter number :");
            scanf("%f",&z);
            m=m-z;
            y++;
        }
        while(y<x);
        printf("answer= %.4f",m);
    }
    else
    {
        printf("please enter minimum two numbers");
    }
    return 0;

}

