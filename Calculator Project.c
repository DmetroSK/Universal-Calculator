#include<stdio.h>
#include<math.h>
int n1,n2,n3;

void main()
{
        mainpage();

       // printf("Universal Calculator\n\n");
       printf("\n\n");
        printf("\t\t\t\t\t\t\t\t1.Standard Calculator\n");
        printf("\t\t\t\t\t\t\t\t2.Scientific Calculator\n");
        printf("\t\t\t\t\t\t\t\t3.Unit Converter\n");
        printf("\t\t\t\t\t\t\t\t4.Matrix Calculator\n");
        printf("\t\t\t\t\t\t\t\t5.Trigonometric Calculator\n");
        printf("\t\t\t\t\t\t\t\t6.Base Calculator");
        printf("\n\n\t\t\t\t\t\t\t\tEnter Your Selection : ");
        scanf("%d",&n1);
switch(n1)

{

case 1:{ Standard_Calculator();

          switch(n2)
       {
         case 1:{ Addition();
        }
      }
         }

case 2:{ Scientific_Calculator();break;}

case 3:{ Unit_Converter(); }

case 4:{ Matrix_Calculator(); }

case 5:{ Trigonometric_Calculator(); }

case 6:{ Base_Calculator();}


}
}

void mainpage()
{
    printf("\n\n\n");
 printf("\t\t\t  ****  **** ****     *** ******** ***          *** *********** **********    *********   ******   ***\n");
 printf("\t\t\t  ****  **** *****    *** ********  ***        ***  *********** ***********  **********  ********  ***\n");
 printf("\t\t\t  ****  **** ******   ***   ****     ***      ***   ****        ****    ***  ****       ***    *** ***\n");
 printf("\t\t\t  ****  **** *** ***  ***   ****      ***    ***    *********   ****    ***  *********  ***    *** ***\n");
 printf("\t\t\t  ****  **** ***  *** ***   ****       ***  ***     *********   ***********  ********** ********** ***\n");
 printf("\t\t\t  ****  **** ***   ******   ****        ******      ****        **********         **** ********** ***\n");
 printf("\t\t\t  ********** ***    ***** ********       ****       *********** ****   ****  ********** ***    *** **********\n");
 printf("\t\t\t   ********  ***     **** ********        **        *********** ****    **** *********  ***    *** **********");

 printf("\n\n\n\n");
 printf("\t\t\t ********   ******   ***         ******** ****  **** ***           ******   ***********  ********  **********\n");
 printf("\t\t\t*********  ********  ***        ********* ****  **** ***          ********  *********** ********** ***********\n");
 printf("\t\t\t*****     ***    *** ***        *****     ****  **** ***         ***    ***     ***     ***    *** ****    ***\n");
 printf("\t\t\t****      ***    *** ***        ****      ****  **** ***         ***    ***     ***     ***    *** ****    ***\n");
 printf("\t\t\t****      ********** ***        ****      ****  **** ***         **********     ***     ***    *** ***********\n");
 printf("\t\t\t*****     ********** ***        *****     ****  **** ***         **********     ***     ***    *** **********\n");
 printf("\t\t\t********* ***    *** ********** ********* ********** *********** ***    ***     ***     ********** ****   ****\n");
 printf("\t\t\t ******** ***    *** **********  ********  ********  *********** ***    ***     ***      ********  ****    ****\n");



}

void Standard_Calculator()
{

             system( "cls");
             mainpage();
             printf("\n\n");
               printf("\t\t\t\t\t\t\t\tStandard Calculator\n\n");
               printf("\t\t\t\t\t\t\t\t1.Addition\n");
               printf("\t\t\t\t\t\t\t\t2.Subtraction\n");
               printf("\t\t\t\t\t\t\t\t3.Multiplication\n");
               printf("\t\t\t\t\t\t\t\t4.Devision\n");
               printf("\t\t\t\t\t\t\t\t5.Back");
               printf("\n\n\t\t\t\t\t\t\t\tEnter Your Selection : ");
               scanf("%d",&n2);


}
void Addition()
{                    do{
                     system( "cls");
                     printf("1.Addition\n\n");

                     float z,t=0;
                     int x,y;
                     printf("How many Number you will add : ");
                     scanf("%d",&x);

                     if(x>=2)
                    {
                      for(y=0;y<x;y++)
                    {
                      printf("Enter Number : ");
                      scanf("%f",&z);
                      t=t+z;
                    }
                      printf("Answer = %.2f",t);

                    }
                      else
                   {
                    printf("Please Enter minimum two Numbers");
                   }
                   printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);

}  while(n3=='y'&&'Y');



}

void Scientific_Calculator()
{
           system("cls");
                printf("2.Scientific Calculator\n\n");
                printf("1.Average\n");
                printf("2.Percentage\n");
                printf("3.Power\n");
                printf("4.Factorial Number\n");
                printf("5.Root\n");
                printf("6.Back");
}

void Unit_Converter()
{
          system( "cls");
                printf("3.Unit Converter\n\n");
                printf("1.Distance\n");
                printf("2.Mass\n");
                printf("3.Volume\n");
                printf("4.Area\n");
                printf("5.Back");
}
void Matrix_Calculator()
{
          system( "cls");
                printf("4.Matrix Calculator\n\n");
                printf("1.Addition\n");
                printf("2.Subtraction\n");
                printf("3.Multiplication\n");
                printf("4.Determine\n");
                printf("5.Inverse\n");
                printf("6.Back");

}

void Trigonometric_Calculator()
{
    system( "cls");
                printf("5.Trigonometric Calculator\n\n");
                printf("1.Sin/Cos/Tan\n");
                printf("2.Cosec/sec/Cot\n");
                printf("3.Back");

}

void Base_Calculator()
{
      system( "cls");
                printf("6.Base Calculator\n\n");
                printf("1.Decimal\n");
                printf("2.Binary\n");
                printf("3.Octal\n");
                printf("4.Hexadecimal\n");
                printf("5.Back");

}


