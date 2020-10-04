#include<stdio.h>
main()
{
    int x;
    float a,n,t;
    x=0;t=0;
    printf("After you finish enter numbers you should enter (963)\n\n");
    printf("Enter Number : ");
        scanf("%f",&n);
     while(n!=963)
    {    t=t+n;
        x=x+1;
        printf("Enter Number : ");
        scanf("%f",&n);

    }

    a=t/x;
    if(t==0)
    {
      printf("Your average : %.2f",a=0);
    }
    else
    {printf("Your average : %.2f",a);}
    return 0;
}
