#include<stdio.h>

int i,j;
void main()
{
    int u[2][2],v[2][2],w[2][2],opt;
    printf("\n===M e n u ===");
    printf("\n1.Input data to matrix u and v");
    printf("\n2.Subtraction of the two matrix u and v");
    printf("\n3.Product of u and v");
    printf("\n4.Sum of all element");
    printf("\n5.Exit");

    do
    {
        printf("\n Enter your option");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:input(u,v);break;
            case 2:subtract(u,v,w);break;
            case 3:product(u,v,w);break;
            case 4:sum(w);break;
            case 5:printf("\n You will exit now");break;
            default :printf("\nInvalid option");
        }
    }
    while(opt!=5);
    }

void input(int u[2][2],int v[2][2])
{
    //input data to matrix u

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\n Enter value for u[%d][%d]",i,j);
            scanf("%d",&u[i][j]);
        }
    }
        //input data to matrix v

        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                printf("\n Enter value for v[%d][%d]",i,j);
                scanf("%d",&v[i][j]);
            }
            }
                     //display matrix u
                     for(i=0;i<2;i++)
                     {
                         for(j=0;j<2;j++)
                         {
                             printf("\t %d",u[i][j]);
                         }
                         printf("\n");
                     }
                       //display matrix v
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\t %d",v[i][j]);
        }
        printf("\n");
    }

}

void subtract(int u[2][2],int v[2][2],int w[2][2])
{
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            w[i][j]=u[i][j]-v[i][j];
        }
    }

    //display matrix w

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\t %d",w[i][j]);

        }
        printf("\n");
    }
}

void product(int u[2][2],int v[2][2],int w[2][2])
{
    int i=0,j=0,k=0;
    //product of u and v assign the obtained value to w

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            w[i][j]=0;
            for(k=0;k<2;k++)
            {
                w[i][j]=w[i][j]+u[i][k]*v[k][j];
            }
        }
    }
    //display matrix w

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\t %d",w[i][j]);
        }
        printf("\n");
    }


}

void sum(int w[2][2])
{
    int sum=0;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum=sum+w[i][j];
        }
    }
    printf("\n sum of matrix w=%d",sum);
}



