#include<stdio.h>
main()
{
    int x,f,n;
    f=1;
    printf("Enter your number : ");
    scanf("%d",&n);
    for(x=0;x<n;n--)
    {
        f=f*n;
    }
    printf("factorial :%d",f);
}
