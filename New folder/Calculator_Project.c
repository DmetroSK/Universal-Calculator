#include<stdio.h>
#include<math.h>
int n1,n2,n3,n4,n5,n6;

void main()
{
    while(1){
         system( "cls");
        mainpage();

        printf("\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t1.Standard Calculator\n");
        printf("\t\t\t\t\t\t\t\t2.Scientific Calculator\n");
        printf("\t\t\t\t\t\t\t\t3.Matrix Calculator\n");
        printf("\t\t\t\t\t\t\t\t4.Base Calculator\n");
        printf("\t\t\t\t\t\t\t\t5.Trigonometric Calculator\n");
        printf("\t\t\t\t\t\t\t\t6.Unit Converter");
        printf("\n\n\t\t\t\t\t\t\t\tEnter Your Selection : ");
        scanf("%d",&n1);

      if(n1==1)
      {
          Standard_Calculator();
          if(n2==1)
          {Addition();}
          else if(n2==2)
          {Subtraction();}
          else if(n2==3)
          {Multiplication();}
        else if(n2==4)
        {Devision();}
        else
        {main();}
      }

      else if(n1==2)
      {
        Scientific_Calculator();
         if(n2==1)
         {Average();}
         else if(n2==2)
         {Logarithm();}
         else if(n2==3)
         {Power();}
         else if(n2==4)
         {Factorial_Number();}
         else if(n2==5)
         {Root();
         if(n4==1)
            {Square_root();}
            else if(n4==2)
            {Cubic_root();}
            else
            {Scientific_Calculator();}
         }
         else
         {main();}
      }

      else if(n1==3)
      {
         Matrix_Calculator();
            if(n2==1)
            {Matrix_Addition();}
            else if(n2==2)
            {Matrix_Subtraction();}
             else if(n2==3)
            {Matrix_Multiplication();}
             else if(n2==4)
            {Determine();}
             else if(n2==5)
            {Inverse();}
             else
            {main();}
      }

      else if(n1==4)
      {
          Base_Calculator();
          if(n2==1)
          { deci();
           if(n4==1)
              {deci_bina();}
             else if(n4==2)
              {desi_octa();}
             else if(n4==3)
              {deci_hexa();}
              else
              {main();}
          }
            else if(n2==2)
            { bina();
              if(n4==1)
              {bina_deci();}
             else if(n4==2)
              {bina_octa();}
            /* else if(n4==3)
              {bina_hexa();}*/
              else
                {main();}
            }
            else if(n2==3)
            {
                octa();
                if(n4==1)
                {octa_deci();}
               else if(n4==2)
                {octa_bina();}
              /* else if(n4==1)
                {octa_hexa();} */
                else
                    {main();}
            }
            else
                {main();}
           /* else if(n2==4)
            {
                hexa();
            }*/
}

      else if(n1==5)
      {
        Trigonometric_Calculator();
            if(n2==1)
            { all_Trigonometric();
               if(n4==1)
               {f_sin();}
               else if(n4==2)
               {f_cos();}
               else if(n4==3)
               {f_tan();}
               else
               {main();}
           }
           else if(n2==2)
           { all_inverse_Trigonometric();
            if(n4==1)
            {Sin_inverse();}
            else if(n4==2)
            {Cos_inverse();}
            else if(n4==3)
            {Tan_inverse();}

           else
           {main();}
      }
      }
      else if(n1==6)
      {
          Unit_Converter();
        if(n2==1)
            {distance();
               if(n4==1 && n5==2)
                {mm_cm();}
               else if(n4==2 && n5==1)
                {cm_mm();}
                else if(n4==1 && n5==3)
                {mm_m();}
                else if(n4==3 && n5==1)
                {m_mm();}
                else if(n4==1 && n5==4)
                {mm_km();}
                else if(n4==4 && n5==1)
                {km_mm();}
               else if(n4==2 && n5==3)
                {cm_m();}
                else if(n4==3 && n5==2)
                {m_cm();}
                else if(n4==2 && n5==4)
                {cm_km();}
                else if(n4==4 && n5==2)
                {km_cm();}
                else if(n4==2 && n5==5)
                {cm_mile();}
                else if(n4==5 && n5==2)
                {mile_cm();}
                else if(n4==3 && n5==4)
                {m_km();}
                else if(n4==4 && n5==3)
                {km_m();}
                else if(n4==3 && n5==5)
                {m_mile();}
                else if(n4==5 && n5==3)
                {mile_m();}
                else if(n4==4 && n5==5)
                {km_mile();}
                else if(n4==5 && n5==4)
                {mile_km();}
                else
                    {printf("\n\t\t\t\t\t\t\t\twrong selection Are you want to go back?(Y/N)");
                     scanf("%s",&n6);
                     if(n6=='Y'&&'y')
                        {main();}
                        else
                            {distance();}
                     }
            }
            else if(n2==2)
            {
                mass();
                if(n4==1 && n5==2)
                    {mg_g();}
                else if(n4==2 && n5==1)
                    {g_mg();}

            }


      }


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
             printf("\n\n\n\n");
               printf("\t\t\t\t\t\t\t\tStandard Calculator\n\n");
               printf("\t\t\t\t\t\t\t\t1.Addition\n");
               printf("\t\t\t\t\t\t\t\t2.Subtraction\n");
               printf("\t\t\t\t\t\t\t\t3.Multiplication\n");
               printf("\t\t\t\t\t\t\t\t4.Devision\n");
               printf("\t\t\t\t\t\t\t\t5.Back to Main Menu");
               printf("\n\n\t\t\t\t\t\t\t\tEnter Your Selection : ");
               scanf("%d",&n2);


}
void Addition()
{
     do{
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
                      printf("\nAnswer = %.2f",t);

                    }
                      else
                   {
                    printf("Please Enter minimum two Numbers");
                   }
                   printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);

}  while(n3=='y'&&'Y');

return main();

}

void Subtraction()
{
    do{
    system( "cls");
     printf("2.Subtraction\n\n");
    float z,m;
  int x,y=1;
    printf("How many Number you will Subtraction : ");
    scanf("%d",&x);
    if(x>=2)
    {
        printf("Enter Number : ");
          scanf("%f",&z);
          m=z;
      do
      {
          printf("Enter Number : ");
          scanf("%f",&z);
          m=m-z;
          y++;
          }
          while(y<x);
          printf("\nAnswer = %.2f",m);
      }

      else
        {
            printf("Please Enter minimum two Numbers");
        }
        printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);

    }while(n3=='y'&&'Y');
    return main();

}

void Multiplication()

{
    do{
     system( "cls");
     printf("3.Multiplication\n\n");
    float z,m=1;
int x,y;
    printf("How many Number you will Multiply : ");
    scanf("%d",&x);
    if(x>=2)
    {
      for(y=0;y<x;y++)
      {
          printf("Enter Number : ");
          scanf("%f",&z);

          m=m*z;
          }
          printf("\nAnswer = %.2f",m);
      }
      else
        {
            printf("Please Enter minimum two Numbers");
        }
         printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);

    }while(n3=='y'&&'Y');
    return main();

}

void Devision()
{
    do{
    system( "cls");
     printf("4.Devision\n\n");
  float z,m;
int x,y=1;
    printf("How many Number you will Divide : ");
    scanf("%d",&x);
    if(x>=2)
    {
        printf("Enter Number : ");
          scanf("%f",&z);
          m=z;
      do
      {
          printf("Enter Number : ");
          scanf("%f",&z);
          m=m/z;
          y++;
          }
          while(y<x);
          printf("\nAnswer = %.2f",m);
      }

      else
        {
            printf("Please Enter minimum two Numbers");
        }
        printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);

    }while(n3=='y'&&'Y');
    return main();

}
          void Scientific_Calculator()
{
              system("cls");
              mainpage();
              printf("\n\n\n\n");
                printf("\t\t\t\t\t\t\t\t2.Scientific Calculator\n\n");
                printf("\t\t\t\t\t\t\t\t1.Average\n");
                printf("\t\t\t\t\t\t\t\t2.Logarithm\n");
                printf("\t\t\t\t\t\t\t\t3.Power\n");
                printf("\t\t\t\t\t\t\t\t4.Factorial Number\n");
                printf("\t\t\t\t\t\t\t\t5.Root\n");
                printf("\t\t\t\t\t\t\t\t6.Back to Main Menu");
                printf("\n\n\t\t\t\t\t\t\t\tEnter Your Selection : ");
               scanf("%d",&n2);

}

void Average()
{
   do{
         system( "cls");
          printf("1.Average\n\n");
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
      printf("\nYour average : %.2f",a=0);
    }
    else
    {printf("\nYour average : %.2f",a);}
    printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);

    }while(n3=='y'&&'Y');
    return main();

}

void Logarithm()
{
     do{
         system( "cls");
          printf("2.Logarithm\n\n");
  float x;

    printf("Enter number you want to find log10(x) : ");
    scanf("%f",&x);

    printf("\nlog10(%.2f) = %.2f",x,log10(x));
     printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);

    }while(n3=='y'&&'Y');
    return main();

}

void Power()
{
    do{
            system( "cls");
             printf("3.Power\n\n");
  int x,y,p;
    printf("Enter Base : ");
    scanf("%d",&x);
    printf("Enter power : ");
    scanf("%d",&y);
    p=pow(x,y);
   printf("\nAnswer is : %d",p);

   printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}

void Factorial_Number()
{
    do{
             system( "cls");
              printf("4.Factorial Number\n\n");
  /*int x,f,n;
    f=1;
    printf("Enter your number : ");
    scanf("%d",&n);
    for(x=0;x<n;n--)
    {
        f=f*n;
    }
    printf("\nfactorial :%d",f);*/

    int x,i,f=1;

    printf("Enter Number : ");
    scanf("%d",&x);
    for(i=1;x>=i;i++)
    {
        f=f*i;
    }

    printf("\n%d ! = %d",x,x);

    for(i=1;x>i;i++)
    {
        printf("* %d",x-i);
    }
    printf("= %d",f);
    printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}

void Root()
{
     system("cls");
              mainpage();
               printf("\n\n\t\t\t\t\t\t\t\t5.Root\n\n");

                printf("\t\t\t\t\t\t\t\t1.Square root\n");
                printf("\t\t\t\t\t\t\t\t2.Cubic root\n");
                 printf("\t\t\t\t\t\t\t\t3.Back to Main Menu");
                printf("\n\n\t\t\t\t\t\t\t\tEnter Your Selection : ");
               scanf("%d",&n4);
}

void Square_root()
{
     float x,y;
      do{
                     system( "cls");
        printf("1.Square root\n\n");
    printf("Enter Number : ");
    scanf("%f",&x);
    y=sqrt(x);
    printf("\nAnswer is : %.3f\n",y);

    printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);

  }while(n3=='y'&&'Y');

return main();
}

void Cubic_root()
{
     float x,y;
      do{
                     system( "cls");
            printf("2.Cubic root\n\n");


    printf("Enter Number : ");
    scanf("%f",&x);
    y=cbrt(x);
    printf("\nAnswer is : %.3f\n",y);

    printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);

  }while(n3=='y'&&'Y');

return main();
}

            void Matrix_Calculator()
{
          system( "cls");
           mainpage();
              printf("\n\n\n\n");
                printf("t\t\t\t\t\t\t\t4.Matrix Calculator\n\n");
                printf("\t\t\t\t\t\t\t\t1.Addition\n");
                printf("\t\t\t\t\t\t\t\t2.Subtraction\n");
                printf("\t\t\t\t\t\t\t\t3.Multiplication\n");
                printf("\t\t\t\t\t\t\t\t4.Determine\n");
                printf("\t\t\t\t\t\t\t\t5.Inverse\n");
                printf("\t\t\t\t\t\t\t\t6.Back");
                 printf("\n\n\t\t\t\t\t\t\t\tEnter Your Selection : ");
               scanf("%d",&n2);

}

void Matrix_Addition()
{

}

void Matrix_Subtraction()
{

}

void Matrix_Multiplication()
{

}

void Determine()
{

}

void Inverse()
{

}

void Base_Calculator()
{
      system( "cls");
       mainpage();
              printf("\n\n\n\n");
                printf("\t\t\t\t\t\t\t\t4.Base Calculator\n\n");
                printf("\t\t\t\t\t\t\t\t1.Decimal to .....\n");
                printf("\t\t\t\t\t\t\t\t2.Binary to .....\n");
                printf("\t\t\t\t\t\t\t\t3.Octal to .....\n");
               // printf("\t\t\t\t\t\t\t\t4.Hexadecimal to .....\n");
                printf("\t\t\t\t\t\t\t\t4.Back to Main Menu");
                 printf("\n\n\t\t\t\t\t\t\t\tEnter Your Selection : ");
               scanf("%d",&n2);

}

void deci()
{
    system( "cls");
       mainpage();
              printf("\n\n\n\n");
                printf("\t\t\t\t\t\t\t\t1.Decimal to .....\n\n");
                printf("\t\t\t\t\t\t\t\t1.Decimal to Binary\n");
                printf("\t\t\t\t\t\t\t\t2.Decimal to Octal\n");
                printf("\t\t\t\t\t\t\t\t3.Decimal to Hexadecimal\n");
               printf("\t\t\t\t\t\t\t\t4.Back to Main Menu");
                 printf("\n\n\t\t\t\t\t\t\t\tEnter Your Selection : ");
               scanf("%d",&n4);
}
void deci_bina()
{
    do{
                     system( "cls");
                     printf("1.Decimal to Binary\n\n");
  long int num;


 printf("Enter the decimal number : ");
 scanf("%ld",&num);

long int reminder[50],i=0,length=0;

while(num>0)
   {
      reminder[i]=num%2;
      num=num/2;
      i++;
      length++;
   }

printf("\nBinary number : ");
for(i=length-1;i>=0;i--)
  {
    printf("%ld",reminder[i]);
  }
   printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);

  }while(n3=='y'&&'Y');

return main();

}

void desi_octa()
{
     do{
                     system( "cls");
                      printf("2.Decimal to Octal\n\n");
    long int num;


 printf("Enter the decimal number : ");
 scanf("%ld",&num);

    long int reminder[50],i=0,length=0;

while(num>0)
   {
      reminder[i]=num%8;
      num=num/8;
      i++;
      length++;
   }

printf("\nOctal number : ");
for(i=length-1;i>=0;i--)
  {
    printf("%ld",reminder[i]);
  }

   printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);

  }while(n3=='y'&&'Y');

return main();
}

void deci_hexa()
{
    do{
                     system( "cls");
                     printf("3.Decimal to Hexadecimal\n\n");
    long int num;


 printf("Enter the decimal number : ");
 scanf("%ld",&num);

 long int reminder[50],i=0,length=0;

while(num>0)
   {
      reminder[i]=num%16;
      num=num/16;
      i++;
      length++;
   }

printf("\nHexadecimal number : ");
for(i=length-1;i>=0;i--)
  {
    switch(reminder[i])
    {
      case 10:
          printf("A");
          break;
      case 11:
          printf("B");
          break;
      case 12:
          printf("C");
          break;
      case 13:
          printf("D");
          break;
      case 14:
          printf("E");
          break;
      case 15:
          printf("F");
          break;
      default :
         printf("%ld",reminder[i]);
    }
  }
   printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);

  }while(n3=='y'&&'Y');

return main();

}

void bina()
{
   system( "cls");
       mainpage();
              printf("\n\n\n\n");
                printf("\t\t\t\t\t\t\t\t2.Binary to .....\n\n");
                printf("\t\t\t\t\t\t\t\t1.Binary to Decimal\n");
                printf("\t\t\t\t\t\t\t\t2.Binary to Octal\n");
               // printf("\t\t\t\t\t\t\t\t3.Binary to Hexadecimal\n");
               printf("\t\t\t\t\t\t\t\t3.Back to Main Menu");
                 printf("\n\n\t\t\t\t\t\t\t\tEnter Your Selection : ");
               scanf("%d",&n4);
}

void bina_deci()
{
     do{
                     system( "cls");
                     printf("1.Binary to Decimal\n\n");
  long int num;

     printf("Enter the binary number : ");
     scanf("%ld", &num);

     long int decimal = 0, base = 1, reminder;

    while (num > 0)
    {
        reminder = num% 10;
        decimal = decimal + (reminder* base);
        num= num/ 10 ;
        base = base * 2;
    }
    printf("\nDecimal Number :%ld ", decimal);

    printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);

  }while(n3=='y'&&'Y');

return main();


}

void bina_octa()
{
    do{
                     system( "cls");
                     printf("2.Binary to Octal\n\n");
    long int num;

    printf("Enter the binary number :");
    scanf("%ld", &num);
long int binary, decimal = 0,octal[50], base = 1, reminder,i,q;
    while (num > 0)
    {
        reminder = num% 10;
        decimal = decimal + (reminder * base);
        num= num/ 10;
        base = base * 2;
    }
    long int m=decimal;
    i=1;
    while(m>0)
    {
        octal[i]=m%8;
        m=m/8;
        i++;
    }
    printf("\nOctal number :",octal);
    for(q=i-1;q>0;q--)
    {
    printf("%ld",octal[q]);
    }
    printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);

  }while(n3=='y'&&'Y');

return main();
}

void bina_hexa()
{

}

void octa()
{
    system( "cls");
       mainpage();
              printf("\n\n\n\n");
                printf("\t\t\t\t\t\t\t\t3.Octal to .....\n\n");
                printf("\t\t\t\t\t\t\t\t1.Octal to Decimal\n");
                printf("\t\t\t\t\t\t\t\t2.Octal to Binary\n");
               // printf("\t\t\t\t\t\t\t\t3.Octal to Hexadecimal\n");
               printf("\t\t\t\t\t\t\t\t3.Back to Main Menu");
                 printf("\n\n\t\t\t\t\t\t\t\tEnter Your Selection : ");
               scanf("%d",&n4);
}

void octa_deci()
{
     do{
                     system( "cls");
                     printf("1.Octal to Decimal\n\n");
    long int num;

     printf("Enter the octal number : ");
     scanf("%ld", &num);

    long int decimal = 0, base = 1, reminder;

    while (num > 0)
    {
        reminder = num% 10;
        decimal = decimal + (reminder* base);
        num= num/ 10 ;
        base = base * 8;
    }
    printf("\nDecimal Number :%ld ", decimal);

    printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);

  }while(n3=='y'&&'Y');

return main();

}

void octa_bina()
{
     do{
                     system( "cls");
                     printf("2.Octal to Binary\n\n");
     long int num;

   printf("Enter the octal number : ");
   scanf("%ld",&num);

   long int octal,binary[50],decimal = 0, base = 1, reminder,m,i,y;

    while (num > 0)
    {
        reminder = num% 10;
        decimal = decimal + (reminder* base);
        num= num/ 10 ;
        base = base * 8;
    }

    {
        int m=decimal;
        i=1;
        while(m>0)
        {

         binary[i]=m%2;
         m=m/2;
         i++;

        }
    printf("\nBinary number : ",octal);
    for(y=i-1;y>0;y--)
    {
    printf("%d",binary[y]);
    }
    }
     printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);

  }while(n3=='y'&&'Y');

return main();

}

void octa_hexa()
{

}

void hexa()
{
   system( "cls");
       mainpage();
              printf("\n\n\n\n");
                printf("t\t\t\t\t\t\t\t4.Hexadecimal to .....\n\n");
                printf("\t\t\t\t\t\t\t\t1.Hexadecimal to Decimal\n");
                printf("\t\t\t\t\t\t\t\t2.Hexadecimal to Binary\n");
                printf("\t\t\t\t\t\t\t\t3.Hexadecimal to Octal\n");
               printf("\t\t\t\t\t\t\t\t4.Back to Main Menu");
                 printf("\n\n\t\t\t\t\t\t\t\tEnter Your Selection : ");
               scanf("%d",&n4);
}
            void Trigonometric_Calculator()
{
    system( "cls");
     mainpage();
              printf("\n\n\n\n");
                printf("\t\t\t\t\t\t\t\t5.Trigonometric Calculator\n\n");
                printf("\t\t\t\t\t\t\t\t1.Sin(x)/Cos(x)/Tan(x)\n");
                printf("\t\t\t\t\t\t\t\t2.Sin(x)/Cos(x)/Tan(x) inverse\n");
                printf("\t\t\t\t\t\t\t\t3.Back to Main Menu");
                 printf("\n\n\t\t\t\t\t\t\t\tEnter Your Selection : ");
               scanf("%d",&n2);

}
void all_Trigonometric()
{
    system( "cls");
     mainpage();
              printf("\n\n\n\n");
                printf("\t\t\t\t\t\t\t\t1.Sin(x)/Cos(x)/Tan(x)\n\n");
                printf("\t\t\t\t\t\t\t\t1.Sin(x)\n");
                printf("\t\t\t\t\t\t\t\t2.Cos(x)\n");
                printf("\t\t\t\t\t\t\t\t3.Tan(x)\n");
                printf("\t\t\t\t\t\t\t\t4.Back to Main Menu");
                 printf("\n\n\t\t\t\t\t\t\t\tEnter Your Selection : ");
               scanf("%d",&n4);
}
void f_sin()
{
     do{
             system( "cls");
             printf("1.Sin(x)\n\n");
  float x,y,z,a;

    printf("Enter angle : ");
    scanf("%f",&x);
    a=22/7;
    a=a/180;
    z=x*a;
    y=sin( z );
    printf("\nsin(%.2f) = %.2f",x,y);
    printf("\n%.2f degree = %.2f radian",x,z);

        printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}

void f_cos()
{
    do{
             system( "cls");
              printf("2.Cos(x)\n\n");
      float x,y,z,a;

    printf("Enter angle : ");
    scanf("%f",&x);
    a=22/7;
    a=a/180;
    z=x*a;
    y=cos( z );
    printf("\ncos(%.2f) = %.2f",x,y);
    printf("\n%.2f degree = %.2f radian",x,z);


        printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();

}

void f_tan()
{
    do{
             system( "cls");
               printf("3.Tan(x)\n\n");
    float x,y,z,a;

    printf("Enter angle : ");
    scanf("%f",&x);
    a=22/7;
    a=a/180;
    z=x*a;
    y=tan(z);
    printf("\ntan(%.2f) = %.2f",x,y);
    printf("\n%.2f degree = %.2f radian",x,z);

     printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();

}

void all_inverse_Trigonometric()
{
    system( "cls");
     mainpage();
              printf("\n\n\n\n");
                printf("t\t\t\t\t\t\t\t2.Sin(x)/Cos(x)/Tan(x) inverse\n\n");
                printf("\t\t\t\t\t\t\t\t1.Sin(x) inverse\n");
                printf("\t\t\t\t\t\t\t\t2.Cos(x) inverse\n");
                printf("\t\t\t\t\t\t\t\t3.Tan(x) inverse\n");
                printf("\t\t\t\t\t\t\t\t4.Back");
                 printf("\n\n\t\t\t\t\t\t\t\tEnter Your Selection : ");
               scanf("%d",&n4);
}

void Sin_inverse()
{
     do{
             system( "cls");
             printf("1.Sin(x) inverse\n\n");

     float x,y,z,a;
    printf("-1<=sin(x)<=1\n\n");
    printf("Enter sin inverse value : ");
    scanf("%f",&x);
    y=asin( x );
    a=180*7;
    a=a/22;
    z=y*a;

    printf("\nsin inverse(%.2f) = %.2f degree",x,ceil(z));
    printf("\n%.2f degree = %.2f radian",z,y);

    printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();

}

void Cos_inverse()
{
    do{
             system( "cls");
              printf("1.Cos(x) inverse\n\n");
    float x,y,z,a;
    printf("-1<=cos(x)<=1\n\n");
    printf("Enter cos inverse value : ");
    scanf("%f",&x);
    y=acos(x);
    a=180*7;
    a=a/22;
    z=y*a;

    printf("\ncos inverse(%.2f) = %.2f degree",x,ceil(z));
    printf("\n%.2f degree = %.2f radian",z,y);

     printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();


}

void Tan_inverse()
{
    do{
             system( "cls");
              printf("1.Tan(x) inverse\n\n");
     float x,y,z,a;

    printf("Enter tan inverse value: ");
    scanf("%f",&x);
    y=atan( x );
    a=180*7;
    a=a/22;
    z=y*a;

    printf("\ntan inverse(%.2f) = %.2f degree",x,ceil(z));
    printf("\n%.2f degree = %.2f radian",z,y);

     printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();


}
            void Unit_Converter()
{
          system( "cls");
           mainpage();
              printf("\n\n\n\n");
                printf("\t\t\t\t\t\t\t\t6.Unit Converter\n\n");
                printf("\t\t\t\t\t\t\t\t1.Distance\n");
                printf("\t\t\t\t\t\t\t\t2.Mass\n");
                printf("\t\t\t\t\t\t\t\t3.Volume\n");
                printf("\t\t\t\t\t\t\t\t4.Area\n");
                printf("\t\t\t\t\t\t\t\t5.Back");
                 printf("\n\n\t\t\t\t\t\t\t\tEnter Your Selection : ");
               scanf("%d",&n2);
}

void distance()
{
    system( "cls");
           mainpage();
              printf("\n\n\n\n");
                printf("\t\t\t\t\t\t\t\t1.Distance\n\n");
                printf("\t\t\t\t\t\t\t\t1.mm\n");
                printf("\t\t\t\t\t\t\t\t2.cm\n");
                printf("\t\t\t\t\t\t\t\t3.m\n");
                printf("\t\t\t\t\t\t\t\t4.km\n");
                printf("\t\t\t\t\t\t\t\t5.mile\n");
                printf("\t\t\t\t\t\t\t\t6.Back");
                 printf("\n\n\t\t\t\t\t\t\t\tEnter Your First Selection : ");
               scanf("%d",&n4);
                printf("\n\t\t\t\t\t\t\t\tEnter Your Second Selection : ");
                 scanf("%d",&n5);
}

void mm_cm()
{
    do{

             system( "cls");
     printf("mm to cm\n\n");
   float mm, cm;
    printf("Enter the distance in millimeters : ");
    scanf("%f",&mm);

         cm = mm /10;
    printf("%.2f mm = %.1f cm\n\n",mm,cm);

    printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();


}

void cm_mm()
{
  do{
             system( "cls");
            printf("cm to mm\n\n");
             float mm, cm;
    printf("Enter the distance in centimeters : ");
    scanf("%f",&cm);
         mm = cm *10;
    printf("%.2f cm = %.2f mm\n\n",cm,mm);

            printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();

}

void mm_m()
{
  do{
             system( "cls");
             printf("mm to m\n\n");
            float m, mm;
    printf("Enter the distance in millimeters : ");
    scanf("%f",&mm);

         m = mm /1000;
    printf("%.2f mm = %.3f m\n\n",mm,m);


            printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}

void m_mm()
{
  do{
             system( "cls");
             printf("m to mm\n\n");
             float m, mm;
    printf("Enter the distance in meters : ");
    scanf("%f",&m);
         mm = m *1000;
    printf("%.2f m = %.2f mm\n\n",m,mm);

            printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}

void mm_km()
{
  do{
             system( "cls");
             printf("mm to km\n\n");
             float mm, km;
    printf("Enter the distance in millimeters : ");
    scanf("%f",&mm);

         km = mm /1000000;
    printf("%.2f mm = %f km\n\n",mm,km);


            printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}

void km_mm()
{
  do{
             system( "cls");
             printf("km to mm\n\n");
             float mm, km;
    printf("Enter the distance in kilometers : ");
    scanf("%f",&km);

         mm = km *1000000;
    printf("%.2f km = %.2f mm\n\n",km,mm);

            printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}

void cm_m()
{
  do{
             system( "cls");
             printf("cm to m\n\n");
             float m, cm;
    printf("Enter the distance in centimeters : ");
    scanf("%f",&cm);

         m = cm /100;
    printf("%.2f cm = %.2f m\n\n",cm,m);

            printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}

void m_cm()
{
   do{
             system( "cls");
             printf("m to cm\n\n");
             float cm, m;
    printf("Enter the distance in meters : ");
    scanf("%f",&m);
         cm = m *100;
    printf("%.2f m = %.2f cm\n\n",m,cm);

            printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}

void cm_km()
{
   do{
             system( "cls");
             printf("cm to km\n\n");
             float cm,km;

    printf("Enter the distance in centimeter: ");
    scanf("%f", &cm);
    km = cm/100000;

    printf("%.2f cm = %.5f km\n\n",cm,km);


            printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}

void km_cm()
{
    do{
             system( "cls");
             printf("km to cm\n\n");
             float cm,km;

    printf("Enter length in kilometer: ");
    scanf("%f", &km);
        cm    = km * 100000;
        printf("%.2f km = %.2f cm\n\n",km, cm);

            printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}

void cm_mile()
{
    do{
             system( "cls");
             printf("cm to miles\n\n");
             float m, cm;
    printf("Enter the distance in centimeters : ");
    scanf("%f",&cm);
         m = cm /160934;
    printf("%.2f cm = %f miles\n\n",cm,m);

            printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}

void mile_cm()
{
   do{
             system( "cls");
             printf("miles to cm\n\n");
             float m, cm;
    printf("Enter the distance in miles : ");
    scanf("%f",&m);

         cm = m * 160934;
    printf("%f miles = %.2f cm\n\n",m,cm);


            printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}

void m_km()
{
   do{
             system( "cls");
             printf("m to km\n\n");
             float km, m;
    printf("Enter the distance in meters : ");
    scanf("%f",&m);

         km = m/1000;
    printf("%.2f m = %.3f km\n\n",m,km);

            printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}

void km_m()
{
  do{
             system( "cls");
             printf("km to m\n\n");
             float km, m;
    printf("Enter the distance in kilometers : ");
    scanf("%f",&km);

         m = km * 1000;
    printf("%.2f km = %.2f m\n\n",km,m);

            printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}

void m_mile()
{
   do{
             system( "cls");
             printf("m to miles\n\n");
             float m, mi;
    printf("Enter the distance in meters : ");
    scanf("%f",&m);
         mi = m /1609.34;
    printf("%.2f m = %.9f miles\n\n",m,mi);

            printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}

void mile_m()
{
  do{
             system( "cls");
             printf("miles to m\n\n");
             float m, mi;
    printf("Enter the distance in miles : ");
    scanf("%f",&mi);

         m = mi *1609.34;
    printf("%.2f miles = %.2f m\n\n",mi,m);

            printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}

void km_mile()
{
  do{
             system( "cls");
             printf("km to miles\n\n");
             float m, km;
    printf("Enter the distance in kilometers : ");
    scanf("%f",&km);

         m = km /1.60934;
    printf("%.2f km = %.2f miles\n\n",km,m);


            printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}

void mile_km()
{
  do{
             system( "cls");
             printf("m to km\n\n");
             float m, km;
    printf("Enter the distance in miles : ");
    scanf("%f",&m);

         km = m *1.60934;
    printf("%.2f miles = %.2f km\n\n",m,km);


            printf("\n\nAre you want to continue ? (Y/N)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}

void mass()
{
    system( "cls");
           mainpage();
              printf("\n\n\n\n");
                printf("\t\t\t\t\t\t\t\t2.Mass\n\n");
                printf("\t\t\t\t\t\t\t\t1.mg\n");
                printf("\t\t\t\t\t\t\t\t2.g\n");
                printf("\t\t\t\t\t\t\t\t3.kg\n");
                printf("\t\t\t\t\t\t\t\t4.MT\n");
                printf("\t\t\t\t\t\t\t\t5.Back");
                 printf("\n\n\t\t\t\t\t\t\t\tEnter Your First Selection : ");
               scanf("%d",&n4);
                printf("\n\t\t\t\t\t\t\t\tEnter Your Second Selection : ");
                 scanf("%d",&n5);
}
void mg_g()
{

}

void g_mg()
{

}

void mg_kg()
{

}

void kg_mg()
{

}

void mg_MT()
{

}

void MT_mg()
{

}

void g_kg()
{

}

void kg_g()
{

}

void g_MT()
{

}

void MT_g()
{

}

void kg_MT()
{

}

void MT_kg()
{

}





