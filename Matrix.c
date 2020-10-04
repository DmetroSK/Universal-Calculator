#include<stdio.h>
#include<conio.h>

void input (int[3][3],int[3][3]);
void subtract (int[3][3],int[3][3],int[3][3]);
void product (int[3][3],int[3][3],int[3][3]);
void sum (int[3][3])    ;
int main()
{
    clrscr();
   int u[3][3],v[3][3],w[3][3],opt;
    printf("\n===Menu===");
    printf("\n1.Input data to matrix u and v");
    printf("\n2.Subtraction of the two matrix  u and v");
    printf("\n3.Product of u and v");
    printf("\n4.Sum of all elements");
    printf("\n5.Exit");

    do{
        printf("\n Enter your option ");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:input(u,v);break;
            case 2:subtract(u,v,w);break;
            case 3:product(u,v,w);break;
            case 4:sum(w);break;
            case 5:printf("\n You will exit now ");break;
            default:printf("\n Invalid option ");
        }

    }
    while(opt!=5);
    getchar();


}
