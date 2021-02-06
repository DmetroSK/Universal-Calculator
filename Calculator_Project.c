#include<stdio.h>
#include<math.h>
int n1,n2,n3,n4,n5,n6;

void main()
{    system( "cls");
     system( "COLOR F0");

        mainpage();

        printf("\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t1.Standard Calculator\n");
        printf("\t\t\t\t\t\t\t\t2.Scientific Calculator\n");
        printf("\t\t\t\t\t\t\t\t3.Base Calculator\n");
        printf("\t\t\t\t\t\t\t\t4.Matrix Calculator\n");
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
            {main();}
         }
         else
         {main();}
      }
    else if(n1==3)
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

      else if(n1==4)
      {
         Matrix_Calculator();
            if(n2==1)
            {Matrix_Addition();}
            else if(n2==2)
            {Matrix_Subtraction();}
             else if(n2==3)
            {Matrix_Multiplication();}
             else if(n2==4)
            {alldetermine();
            if(n4==1)
                {Determine2();}
            else if(n4==2)
                {Determine3();}
                else{main();} }

             else
            {main();}
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
      else
           {main();}
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
                    {printf("\n\t\t\t\t\t\t\t\twrong selection Are you want to go back?(y/n)");
                     scanf("%s",&n6);
                     if(n6=='Y'&&'y')
                        {main();}
                        else
                            {distance();}
                     }
            }
            else if(n2==2)
            {  mass();
                                if(n4==1 && n5==2)
                                {mg_g();}
                                else if(n4==2 && n5==1)
                                {g_mg(); }
                                else if(n4==1 && n5==3)
                                {mg_kg(); }
                                else if(n4==3 && n5==1)
                                {kg_mg(); }
                                else if(n4==1 && n5==4)
                                {mg_MT(); }
                                else if(n4==4 && n5==1)
                                {MT_mg(); }
                                else if(n4==2 && n5==3)
                                {g_kg(); }
                                else if(n4==3 && n5==2)
                                {kg_g(); }
                                else if(n4==2 && n5==4)
                                {g_MT(); }
                                else if(n4==4 && n5==2)
                                {MT_g(); }
                                else if(n4==3 && n5==4)
                                {kg_MT(); }
                                else if(n4==4 && n5==3)
                                {MT_kg(); }
                                else
                    {printf("\n\t\t\t\t\t\t\t\twrong selection Are you want to go back?(y/n)");
                     scanf("%s",&n6);
                     if(n6=='Y'&&'y')
                        {main();}
                        else
                            {mass();}



                    }

            }
            else if(n2==3)
            {  volume();
                                if(n4==1 && n5==2)
                                {ml_l();}
                                else if(n4==2 && n5==1)
                                {l_ml(); }
                                else if(n4==1 && n5==3)
                                {ml_dm3(); }
                                else if(n4==3 && n5==1)
                                {dm3_ml(); }
                                else if(n4==1 && n5==4)
                                {ml_cm3(); }
                                else if(n4==4 && n5==1)
                                {cm3_ml(); }
                                else if(n4==1 && n5==5)
                                {ml_m3(); }
                                else if(n4==5 && n5==1)
                                {m3_ml(); }
                                else if(n4==2 && n5==3)
                                {l_dm3(); }
                                else if(n4==3 && n5==2)
                                {dm3_l(); }
                                else if(n4==2 && n5==4)
                                {l_cm3(); }
                                else if(n4==4 && n5==2)
                                {cm3_l(); }
                                else if(n4==2 && n5==5)
                                {l_m3(); }
                                else if(n4==5 && n5==2)
                                {m3_l(); }
                                else if(n4==3 && n5==4)
                                {dm3_cm3(); }
                                else if(n4==4 && n5==3)
                                {cm3_dm3(); }
                                else if(n4==3 && n5==5)
                                {dm3_m3(); }
                                else if(n4==5 && n5==3)
                                {m3_dm3(); }
                                else if(n4==4 && n5==5)
                                {cm3_m3(); }
                                else if(n4==5 && n5==4)
                                {m3_cm3(); }
                                else
                    {printf("\n\t\t\t\t\t\t\t\twrong selection Are you want to go back?(y/n)");
                     scanf("%s",&n6);
                     if(n6=='Y'&&'y')
                        {main();}
                        else
                            {volume();}



                    }

            }
                        else if(n2==4)
            {  area();
                                if(n4==1 && n5==2)
                                {mm2_dm2();}
                                else if(n4==2 && n5==1)
                                {dm2_mm2(); }
                                else if(n4==1 && n5==3)
                                {mm2_cm2(); }
                                else if(n4==3 && n5==1)
                                {cm2_mm2(); }
                                else if(n4==1 && n5==4)
                                {mm2_m2(); }
                                else if(n4==4 && n5==1)
                                {m2_mm2(); }
                                else if(n4==1 && n5==5)
                                {mm2_km2(); }
                                else if(n4==5 && n5==1)
                                {km2_mm2(); }
                                else if(n4==2 && n5==3)
                                {dm2_cm2(); }
                                else if(n4==3 && n5==2)
                                {cm2_dm2(); }
                                else if(n4==2 && n5==4)
                                {dm2_m2(); }
                                else if(n4==4 && n5==2)
                                {m2_dm2(); }
                                else if(n4==2 && n5==5)
                                {dm2_km2(); }
                                else if(n4==5 && n5==2)
                                {km2_dm2(); }
                                else if(n4==3 && n5==4)
                                {cm2_m2(); }
                                else if(n4==4 && n5==3)
                                {m2_cm2(); }
                                else if(n4==3 && n5==5)
                                {cm2_km2(); }
                                else if(n4==5 && n5==3)
                                {km2_cm2(); }
                                else if(n4==4 && n5==5)
                                {m2_km2(); }
                                else if(n4==5 && n5==4)
                                {km2_m2(); }
                                else
                    {printf("\n\t\t\t\t\t\t\t\twrong selection Are you want to go back?(y/n)");
                     scanf("%s",&n6);
                     if(n6=='Y'&&'y')
                        {main();}
                        else
                            {area();}



                    }

            }
            else
           {main();}



      }
}

     void mainpage()
{
 printf("\n\n\n");
 printf("\t\t\t\t  ****  **** ****     *** ******** ***          *** *********** **********    *********   ******   ***\n");
 printf("\t\t\t\t  ****  **** *****    *** ********  ***        ***  *********** ***********  **********  ********  ***\n");
 printf("\t\t\t\t  ****  **** ******   ***   ****     ***      ***   ****        ****    ***  ****       ***    *** ***\n");
 printf("\t\t\t\t  ****  **** *** ***  ***   ****      ***    ***    *********   ****    ***  *********  ***    *** ***\n");
 printf("\t\t\t\t  ****  **** ***  *** ***   ****       ***  ***     *********   ***********  ********** ********** ***\n");
 printf("\t\t\t\t  ****  **** ***   ******   ****        ******      ****        **********         **** ********** ***\n");
 printf("\t\t\t\t  ********** ***    ***** ********       ****       *********** ****   ****  ********** ***    *** **********\n");
 printf("\t\t\t\t   ********  ***     **** ********        **        *********** ****    **** *********  ***    *** **********");

 printf("\n\n\n\n");
 printf("\t\t\t\t ********   ******   ***         ******** ****  **** ***           ******   ***********  ********  **********\n");
 printf("\t\t\t\t*********  ********  ***        ********* ****  **** ***          ********  *********** ********** ***********\n");
 printf("\t\t\t\t*****     ***    *** ***        *****     ****  **** ***         ***    ***     ***     ***    *** ****    ***\n");
 printf("\t\t\t\t****      ***    *** ***        ****      ****  **** ***         ***    ***     ***     ***    *** ****    ***\n");
 printf("\t\t\t\t****      ********** ***        ****      ****  **** ***         **********     ***     ***    *** ***********\n");
 printf("\t\t\t\t*****     ********** ***        *****     ****  **** ***         **********     ***     ***    *** **********\n");
 printf("\t\t\t\t********* ***    *** ********** ********* ********** *********** ***    ***     ***     ********** ****   ****\n");
 printf("\t\t\t\t ******** ***    *** **********  ********  ********  *********** ***    ***     ***      ********  ****    ****\n");



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
                   printf("\n\nAre you want to continue ? (y/n)");
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
        printf("\n\nAre you want to continue ? (y/n)");
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
         printf("\n\nAre you want to continue ? (y/n)");
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
        printf("\n\nAre you want to continue ? (y/n)");
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
    printf("\n\nAre you want to continue ? (y/n)");
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
     printf("\n\nAre you want to continue ? (y/n)");
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

   printf("\n\nAre you want to continue ? (y/n)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}

void Factorial_Number()
{
    do{
             system( "cls");
              printf("4.Factorial Number\n\n");
               printf("Maximum factorial Number 12!\n\n");
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
    printf("\n\nAre you want to continue ? (y/n)");
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

    printf("\n\nAre you want to continue ? (y/n)");
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

    printf("\n\nAre you want to continue ? (y/n)");
                   scanf("%s",&n3);

  }while(n3=='y'&&'Y');

return main();
}


void Base_Calculator()
{
      system( "cls");
       mainpage();
              printf("\n\n\n\n");
                printf("\t\t\t\t\t\t\t\t3.Base Calculator\n\n");
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
   printf("\n\nAre you want to continue ? (y/n)");
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

   printf("\n\nAre you want to continue ? (y/n)");
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
   printf("\n\nAre you want to continue ? (y/n)");
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

    printf("\n\nAre you want to continue ? (y/n)");
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
    printf("\n\nAre you want to continue ? (y/n)");
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

    printf("\n\nAre you want to continue ? (y/n)");
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
     printf("\n\nAre you want to continue ? (y/n)");
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
                printf("\t\t\t\t\t\t\t\t4.Hexadecimal to .....\n\n");
                printf("\t\t\t\t\t\t\t\t1.Hexadecimal to Decimal\n");
                printf("\t\t\t\t\t\t\t\t2.Hexadecimal to Binary\n");
                printf("\t\t\t\t\t\t\t\t3.Hexadecimal to Octal\n");
               printf("\t\t\t\t\t\t\t\t4.Back to Main Menu");
                 printf("\n\n\t\t\t\t\t\t\t\tEnter Your Selection : ");
               scanf("%d",&n4);
}

             void Matrix_Calculator()
{
          system( "cls");
           mainpage();
              printf("\n\n\n\n");
                printf("\t\t\t\t\t\t\t\t4.Matrix Calculator\n\n");
                printf("\t\t\t\t\t\t\t\t1.Addition\n");
                printf("\t\t\t\t\t\t\t\t2.Subtraction\n");
                printf("\t\t\t\t\t\t\t\t3.Multiplication\n");
                printf("\t\t\t\t\t\t\t\t4.Determine\n");
               // printf("\t\t\t\t\t\t\t\t5.Inverse\n");
                printf("\t\t\t\t\t\t\t\t5.Back to Main Menu");
                 printf("\n\n\t\t\t\t\t\t\t\tEnter Your Selection : ");
               scanf("%d",&n2);

}

void Matrix_Addition()
{
   int i, j, mat1[10][10], mat2[10][10], sum[10][10];
   int row1, col1, row2, col2;
    do{
                     system( "cls");
            printf("1.Matrix Addition\n\n\n");

   printf("Enter the number of Rows of Matrix 1    : ");
   scanf("%d",&row1);
   printf("Enter the number of Columns of Matrix 1 : ");
   scanf("%d",&col1);

   printf("\nEnter the number of Rows of Matrix 2    : ");
   scanf("%d", &row2);
     printf("Enter the number of Columns of Matrix 2 : ");
   scanf("%d", &col2);


   if (row1 != row2 || col1 != col2) {
      printf("\n Order of two matrices is not same ");

   }
   else{ printf("\n");
   //Elements in Matrix 1
   for (i = 1; i <= row1; i++)
    {
      for (j = 1; j <= col1; j++)
      {
         printf("Enter the Element a[%d][%d] : ", i, j);
         scanf("%d", &mat1[i][j]);
      }
   }
    printf("\n");
   //Elements in Matrix 2
   for (i = 1; i <= row2; i++)
   {
      for (j = 1; j <= col2; j++) {
         printf("Enter the Element b[%d][%d] : ", i, j);
         scanf("%d", &mat2[i][j]);
      }
   }


    // Adding Two matrices

     for(i=1;i<=row1;++i)
        for(j=1;j<=col1;++j)
        {
            sum[i][j]=mat1[i][j]+mat2[i][j];
        }


    // Displaying the result
    printf("\nSum of two matrix is: \n\n");

    for(i=1;i<=row1;++i)
       { for(j=1;j<=col1;++j)
        {

            printf("%d   ",sum[i][j]);

            if(j==col1)
            {
                printf("\n\n");
            }
        }
       }
   }
    printf("\n\nAre you want to continue ? (y/n)");
                   scanf("%s",&n3);

  }while(n3=='y'&&'Y');

return main();
}

void Matrix_Subtraction()
{
 int i, j, mat1[10][10], mat2[10][10], sum[10][10];
   int row1, col1, row2, col2;

   do{
                     system( "cls");
            printf("1.Matrix Subtraction\n\n\n");

   printf("Enter the number of Rows of Matrix 1    : ");
   scanf("%d",&row1);
   printf("Enter the number of Columns of Matrix 1 : ");
   scanf("%d",&col1);

   printf("\nEnter the number of Rows of Matrix 2    : ");
   scanf("%d", &row2);
     printf("Enter the number of Columns of Matrix 2 : ");
   scanf("%d", &col2);



   if (row1 != row2 || col1 != col2) {
      printf("\n Order of two matrices is not same ");

   }
   else{ printf("\n");
   //Elements in Matrix 1
   for (i = 1; i <= row1; i++)
    {
      for (j = 1; j <= col1; j++)
      {
         printf("Enter the Element a[%d][%d] : ", i, j);
         scanf("%d", &mat1[i][j]);
      }
   }
    printf("\n");
   //Elements in Matrix 2
   for (i = 1; i <= row2; i++)
   {
      for (j = 1; j <= col2; j++) {
         printf("Enter the Element b[%d][%d] : ", i, j);
         scanf("%d", &mat2[i][j]);
      }
   }


    // subtracting Two matrices

     for(i=1;i<=row1;++i)
        for(j=1;j<=col1;++j)
        {
            sum[i][j]=mat1[i][j]-mat2[i][j];
        }


    // Displaying the result
    printf("\nSubtraction of two matrix is: \n\n");

    for(i=1;i<=row1;++i)
       { for(j=1;j<=col1;++j)
        {

            printf("%d   ",sum[i][j]);

            if(j==col1)
            {
                printf("\n\n");
            }
        }
       }
   }
    printf("\n\nAre you want to continue ? (y/n)");
                   scanf("%s",&n3);

  }while(n3=='y'&&'Y');

return main();
}

void Matrix_Multiplication()
{
 int row1, col1, row2,col2, i, j, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];

  do{
                     system( "cls");
            printf("3.Matrix Multiplication\n\n\n");
     printf("Enter the number of Rows of Matrix 1    : ");
   scanf("%d",&row1);//m
   printf("Enter the number of Columns of Matrix 1 : ");
   scanf("%d",&col1);//n
    printf("\n");
   printf("Enter the number of Rows of Matrix 2    : ");
   scanf("%d",&row2);//p
   printf("Enter the number of Columns of Matrix 2 : ");
   scanf("%d",&col2);//q

    if (col1 != row2) {
      printf("\nMatrices with entered orders can't be multiplied with each other.\n");}
      else{
  printf("\nEnter the elements of first matrix\n\n");

  for (i = 1; i<= row1; i++)//c
   {
       for (j = 1; j <= col1; j++)//d
      { printf("Enter the Element a[%d][%d] : ", i, j);
      scanf("%d", &first[i][j]);}
   }

 printf("\nEnter the elements of second matrix\n\n");

    for (i = 1; i <= row2; i++)
     {
        for (j = 1; j <= col2; j++)
        {printf("Enter the Element a[%d][%d] : ", i, j);
        scanf("%d", &second[i][j]); }
     }

    for (i = 1; i <= row1; i++)
        {
      for (j = 1; j <= col2; j++)
       {
        for (k = 1; k <= row2; k++) {
          sum = sum + first[i][k]*second[k][j];
        }

        multiply[i][j] = sum;
        sum = 0;
      }
    }

    printf("\n\nProduct of entered matrices :\n\n");

    for (i = 1; i <= row1; i++)
        {
      for (j = 1; j <= col2; j++)
        printf("%d\t", multiply[i][j]);

      printf("\n");
    }
  }
  printf("\n\nAre you want to continue ? (y/n)");
                   scanf("%s",&n3);

  }while(n3=='y'&&'Y');

return main();
}

void alldetermine()
{
              system( "cls");
              mainpage();
              printf("\n\n\n\n");
                printf("\t\t\t\t\t\t\t\t4.Determine of Matrix\n\n");
                printf("\t\t\t\t\t\t\t\t1.2x2\n");
                printf("\t\t\t\t\t\t\t\t2.3x3\n");
                printf("\t\t\t\t\t\t\t\t3.Back to Main Menu");
                 printf("\n\n\t\t\t\t\t\t\t\tEnter Your Selection : ");
               scanf("%d",&n4);

}

void Determine2()
{
int A[3][3];
    int row, col,i,j;
    long det;

do{
                     system( "cls");
                     printf("1.2x2\n\n");

    printf("\nEnter elements in matrix of size 2x2: \n\n");
    for(i=1; i<=2; i++)
    {
        for(j=1; j<=2; j++)
        {  printf("Enter the Element A[%d][%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nThe matrix is\n");
  for(i=1;i<=2;i++){
      printf("\n");
      for(j=1;j<=2;j++)
           printf("%d\t",A[i][j]);
  }


    det = (A[1][1] * A[2][2]) - (A[1][2] * A[2][1]);

    printf("\n\nDeterminant of matrix A = %ld", det);

     printf("\n\nAre you want to continue ? (y/n)");
                   scanf("%s",&n3);

  }while(n3=='y'&&'Y');

return main();
}

void Determine3()
{
int a[4][4],i,j;

  long determinant;


do{
                     system( "cls");
                     printf("2.3x3\n\n");
  printf("Enter elements in matrix of size 3x3: \n\n");
  for(i=1;i<=3;i++)
     {
         for(j=1;j<=3;j++)
           {printf("Enter the Element A[%d][%d] : ", i, j);
           scanf("%d",&a[i][j]);}
     }

  printf("\nThe matrix is\n");
  for(i=1;i<=3;i++){
      printf("\n");
      for(j=1;j<=3;j++)
           printf("%d\t",a[i][j]);
  }

  determinant = a[1][1]*((a[2][2]*a[3][3]) - (a[2][3]*a[3][2])) -a[1][2]*(a[2][1]*a[3][3] - a[2][3]*a[3][1]) + a[1][3]*(a[2][1]*a[3][2] - a[2][2]*a[3][1]);

  printf("\n\nDeterminant of 3X3 matrix: %1d",determinant);

  printf("\n\nAre you want to continue ? (y/n)");
                   scanf("%s",&n3);

  }while(n3=='y'&&'Y');

return main();
}

void Inverse()
{

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

        printf("\n\nAre you want to continue ? (y/n)");
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


        printf("\n\nAre you want to continue ? (y/n)");
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

     printf("\n\nAre you want to continue ? (y/n)");
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

    printf("\n\nAre you want to continue ? (y/n)");
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

     printf("\n\nAre you want to continue ? (y/n)");
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

     printf("\n\nAre you want to continue ? (y/n)");
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
               // printf("\t\t\t\t\t\t\t\t6.Back");
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
    printf("%.2f mm = %.2f cm\n\n",mm,cm);

    printf("\n\nAre you want to continue ? (y/n)");
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

            printf("\n\nAre you want to continue ? (y/n)");
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


            printf("\n\nAre you want to continue ? (y/n)");
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

            printf("\n\nAre you want to continue ? (y/n)");
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


            printf("\n\nAre you want to continue ? (y/n)");
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

            printf("\n\nAre you want to continue ? (y/n)");
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

            printf("\n\nAre you want to continue ? (y/n)");
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

            printf("\n\nAre you want to continue ? (y/n)");
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


            printf("\n\nAre you want to continue ? (y/n)");
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

            printf("\n\nAre you want to continue ? (y/n)");
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

            printf("\n\nAre you want to continue ? (y/n)");
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


            printf("\n\nAre you want to continue ? (y/n)");
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

            printf("\n\nAre you want to continue ? (y/n)");
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

            printf("\n\nAre you want to continue ? (y/n)");
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

            printf("\n\nAre you want to continue ? (y/n)");
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

            printf("\n\nAre you want to continue ? (y/n)");
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


            printf("\n\nAre you want to continue ? (y/n)");
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


            printf("\n\nAre you want to continue ? (y/n)");
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
               // printf("\t\t\t\t\t\t\t\t5.Back");
                printf("\n\n\t\t\t\t\t\t\t\tEnter Your First Selection : ");
                scanf("%d",&n4);
                printf("\n\t\t\t\t\t\t\t\tEnter Your Second Selection : ");
                scanf("%d",&n5);
}

void mg_g()
{
   do{
             system( "cls");
             printf("mg to g\n\n");
             float mg,g;
    printf("Enter the mas in milligrams : ");
    scanf("%f",&mg);
    g = mg/1000;
    printf("%.2f mg = %.3f g",mg,g);

             printf("\n\nAre you want to continue ? (y/n)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}

void g_mg()
{
 do{
             system( "cls");
             printf("g to mg\n\n");
float g,mg;
    printf("Enter the mas in grams : ");
    scanf("%f",&g);
    mg = g*1000;
    printf("%.2f g = %.2f mg",g,mg);

             printf("\n\nAre you want to continue ? (y/n)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}

void mg_kg()
{
 do{
             system( "cls");
             printf("mg to kg\n\n");
             float kg,mg;
    printf("Enter the mas in milligrams : ");
    scanf("%f",&mg);
    kg = mg/1000000;
    printf("%.2f mg = %.6f kg\n\n",mg,kg);


             printf("\n\nAre you want to continue ? (y/n)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}

void kg_mg()
{
 do{
             system( "cls");
             printf("kg to mg\n\n");
             float kg,mg;
    printf("Enter the mas in kilograms : ");
    scanf("%f",&kg);
    mg = kg*1000000;
    printf("%.2f kg = %.2f mg\n\n",kg,mg);


             printf("\n\nAre you want to continue ? (y/n)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}

void mg_MT()
{
 do{
             system( "cls");
             printf("mg to MT\n\n");
             float mg,mt;

    printf("Enter the mas in milligrams : ");
    scanf("%f",&mg);
    mt = mg /1000000000;
    printf("%.2f mg = %.9f MT",mg,mt);


             printf("\n\nAre you want to continue ? (y/n)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}

void MT_mg()
{
 do{
             system( "cls");
             printf("MT to mg\n\n");
             float mg,mt;

    printf("Enter the mas in metric tones : ");
    scanf("%f",&mt);
    mg = mt *1000000000;
    printf("%.2f MT = %.2f mg",mt,mg);


             printf("\n\nAre you want to continue ? (y/n)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}

void g_kg()
{
 do{
             system( "cls");
             printf("g to kg\n\n");
             float kg,g;
    printf("Enter the mas in grams : ");
    scanf("%f",&g);
    kg = g/1000;
    printf("%.2f g = %.3f kg\n\n",g,kg);

             printf("\n\nAre you want to continue ? (y/n)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}

void kg_g()
{
 do{
             system( "cls");
             printf("kg to g\n\n");
             float kg,g;
    printf("Enter the mas in kilograms : ");
    scanf("%f",&kg);
    g = kg*1000;
    printf("%.2f kg = %.2f g",kg,g);


             printf("\n\nAre you want to continue ? (y/n)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}

void g_MT()
{
 do{
             system( "cls");
             printf("g to MT\n\n");

             float g,mt;

    printf("Enter the mas in grams : ");
    scanf("%f",&g);
    mt = g /1000000;
    printf("%.2f g = %.6f mt",g,mt);

             printf("\n\nAre you want to continue ? (y/n)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}

void MT_g()
{
 do{
             system( "cls");
             printf("MT to g\n\n");
             float g,mt;
   printf("Enter the mas in metric tones : ");
    scanf("%f",&mt);
    g = mt *1000000;
    printf("%.2f mt = %.2f g",mt,g);
   printf("\n\nAre you want to continue ? (y/n)");
                   scanf("%s",&n3);


}  while(n3=='y'&&'Y');

return main();
}

void kg_MT()
{
 do{
             system( "cls");
             printf("kg to MT\n\n");
             float kg,mt;
             printf("Enter the mas in kilograms : ");
             scanf("%f",&kg);
             mt = kg*1000;
             printf("%.2f kg = %.2f mt\n\n",kg,mt);


             printf("\n\nAre you want to continue ? (y/n)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}

void MT_kg()
{
 do{
             system( "cls");
             printf("MT to kg\n\n");
             float kg,mt;
    printf("Enter the mas in Metric tones : ");
    scanf("%f",&mt);
    kg = mt*1000;
    printf("%.2f mt = %.2f kg\n\n",mt,kg);


             printf("\n\nAre you want to continue ? (y/n)");
                   scanf("%s",&n3);
}  while(n3=='y'&&'Y');

return main();
}
void volume()
{
    system( "cls");
           mainpage();
              printf("\n\n\n\n");
                printf("\t\t\t\t\t\t\t\t1.Volume\n\n");
                printf("\t\t\t\t\t\t\t\t1.ml\n");
                printf("\t\t\t\t\t\t\t\t2.l\n");
                printf("\t\t\t\t\t\t\t\t3.cubic dm\n");
                printf("\t\t\t\t\t\t\t\t4.cubic cm\n");
                printf("\t\t\t\t\t\t\t\t5.cubic m\n");
                //printf("\t\t\t\t\t\t\t\t6.Back");
                printf("\n\n\t\t\t\t\t\t\t\tEnter Your First Selection : ");
                scanf("%d",&n4);
                printf("\n\t\t\t\t\t\t\t\tEnter Your Second Selection : ");
                 scanf("%d",&n5);
}

void ml_cm3()
{
 do{
             system( "cls");
             printf("ml to cubic cm\n\n");
             float ml,cm3;cm3=1;
             printf("Enter the volume of milliliter : ");
             scanf("%f",&ml);
             cm3 = ml * cm3;
             printf("milliliter %.2f = cubic centimeter %.2f",ml,cm3);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void cm3_ml()
{
 do{
             system( "cls");
             printf("cubic cm to ml\n\n");
             float ml,cm3;ml=1;
             printf("Enter the volume of cubic centimeter : ");
             scanf("%f",&cm3);
             ml =cm3 * ml;
             printf("cubic centimeter %.2f = milliliter %.2f",cm3,ml);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);

}  while(n3=='y'&&'Y');
return main();
}
void ml_m3()
{
 do{
             system( "cls");
             printf("ml to cubic m\n\n");
             float ml,m3;
             printf("Enter the volume of milliliter : ");
             scanf("%f",&ml);
             m3 = ml * 0.000001;
             printf("milliliter %.2f = cubic meter %.6f",ml,m3);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);

}  while(n3=='y'&&'Y');
return main();
}
void m3_ml()
{
 do{
             system( "cls");
             printf("cubic m to ml\n\n");
             float ml,m3;
             printf("Enter the volume of cubic meter : ");
             scanf("%f",&m3);
             ml = m3 / 0.000001;
             printf("cubic meter %.2f = milliliter %.6f",m3,ml);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);

}  while(n3=='y'&&'Y');
return main();
}
void ml_dm3()
{
 do{
             system( "cls");
             printf("ml to cubic dm\n\n");
             float ml,dm3;
             printf("Enter the volume of milliliter : ");
             scanf("%f",&ml);
             dm3 = ml * 1000;
             printf("\nMilliliter %.2f = cubic decimeter %.2f",ml,dm3);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void dm3_ml()
{
 do{
             system( "cls");
             printf("cubic dm to ml\n\n");
             float ml,dm3;
             printf("Enter the volume of cubic decimeter : ");
             scanf("%f",&dm3);
             ml = dm3 / 1000;
             printf("\ncubic decimeter %.2f = milliliter %.3f",dm3,ml);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void l_cm3()
{
 do{
             system( "cls");
             printf("l to cubic cm\n\n");
             float l,cm3;
             printf("Enter the volume of liter : ");
             scanf("%f",&l);
             cm3 = l * 1000;
             printf("liter %.2f = cubic centimeter %.2f",l,cm3);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void cm3_l()
{
 do{
             system( "cls");
             printf("cubic cm to l\n\n");
             float l,cm3;
             printf("Enter the volume of cubic centimeter : ");
             scanf("%f",&cm3);
             l = cm3 / 1000;
             printf("cubic centimeter %.2f = liter %.3f",cm3,l);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void l_m3()
{
 do{
             system( "cls");
             printf("l to cubic m\n\n");
             float l,m3;m3=1;
             printf("Enter the volume of liter : ");
             scanf("%f",&l);
             m3 = l * m3;
             printf("liter %.2f = cubic meter %.2f",l,m3);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void m3_l()
{
 do{
             system( "cls");
             printf("cubic m to l\n\n");
             float l,m3;l=1;
             printf("Enter the volume of cubic meter : ");
             scanf("%f",&m3);
             l = m3 * l;
             printf("cubic meter %.2f = liter %.2f",m3,l);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void l_dm3()
{
 do{
             system( "cls");
             printf("l to cubic dm\n\n");
             float l,dm3;dm3=1;
             printf("Enter the volume of liter : ");
             scanf("%f",&l);
             dm3 = l * dm3;
             printf("liter %.2f = cubic decimeter %.2f",l,dm3);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void dm3_l()
{
 do{
             system( "cls");
             printf("cubic dm to l\n\n");
             float l,dm3;l=1;
             printf("Enter the volume of cubic decimeter : ");
             scanf("%f",&dm3);
             l = dm3 * l;
             printf("Cubic decimeter %.2f = liter %.2f",dm3,l);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void ml_l()
{
 do{
             system( "cls");
             printf("ml to l\n\n");
             float ml,l;
             printf("Enter the volume of milliliter: ");
             scanf("%f",&ml);
             l = ml / 1000;
             printf("\nmilliliter %.2f = liter  %.3f",ml,l);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();




}
void l_ml()
{
 do{
             system( "cls");
             printf("l to ml\n\n");
             float l,ml;
             printf("Enter the volume of liter: ");
             scanf("%f",&l);
             ml = l * 1000;
             printf("\nliter %.2f = milliliter  %.3f",l,ml);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void dm3_m3()
{
 do{
             system( "cls");
             printf("cubic dm to cubic m\n\n");
             float dm3,m3;
             printf("Enter the volume of cubic decimeter : ");
             scanf("%f",&dm3);
             m3 = dm3 / 1000;
             printf("\ncubic decimeter %.2f = cubic meter  %.3f",dm3,m3);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void m3_dm3()
{
 do{
             system( "cls");
             printf("cubic m to cubic dm\n\n");
             float m3,dm3;
    printf("Enter the volume of cubic meter : ");
    scanf("%f",&m3);
    dm3 = m3 * 1000;
    printf("\ncubic meter %.2f = cubic decimeter  %.2f",m3,dm3);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void cm3_m3()
{
 do{
             system( "cls");
             printf("cubic cm to cubic m\n\n");
             float cm3,m3;
             printf("Enter the volume of cubic centimeter : ");
             scanf("%f",&cm3);
             m3 = cm3 / 1000000;
             printf("\ncubic centimeter %.2f = cubic meter  %.6f",cm3,m3);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void m3_cm3()
{
 do{
             system( "cls");
             printf("cubic m to cubic cm\n\n");
             float m3,cm3;
    printf("Enter the volume of cubic meter : ");
    scanf("%f",&m3);
    cm3 = m3 * 1000000;
    printf("\ncubic meter %.2f = cubic centimeter  %.2f",m3,cm3);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void dm3_cm3()
{
   do{
             system( "cls");
             printf("cubic dm to cubic cm\n\n");
             float dm3,cm3;
    printf("Enter the volume of cubic decimeter : ");
    scanf("%f",&dm3);
    cm3 = dm3 * 1000;
    printf("\ncubic decimeter %.2f = cubic centimeter %.2f",dm3,cm3);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}

void cm3_dm3()
{
 do{
             system( "cls");
             printf("cubic cm to cubic dm\n\n");
             float cm3,dm3;
             printf("Enter the volume of cubic centimeter : ");
             scanf("%f",&cm3);
             dm3 = cm3 / 1000;
             printf("\ncubic centimeter %.2f = cubic decimeter  %.3f",cm3,dm3);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();

}
void area()
{
    system( "cls");
           mainpage();
              printf("\n\n\n\n");
                printf("\t\t\t\t\t\t\t\t1.Area\n\n");
                printf("\t\t\t\t\t\t\t\t1.square mm\n");
                printf("\t\t\t\t\t\t\t\t2.square dm\n");
                printf("\t\t\t\t\t\t\t\t3.square cm\n");
                printf("\t\t\t\t\t\t\t\t4.square m\n");
                printf("\t\t\t\t\t\t\t\t5.square km\n");
                //printf("\t\t\t\t\t\t\t\t6.Back");
                printf("\n\n\t\t\t\t\t\t\t\tEnter Your First Selection : ");
                scanf("%d",&n4);
                printf("\n\t\t\t\t\t\t\t\tEnter Your Second Selection : ");
                scanf("%d",&n5);
}
void mm2_dm2()
{
 do{
             system( "cls");
             printf("square mm to square dm\n\n");
             float mm2,dm2;
             printf("Enter the area of square millimeter : ");
             scanf("%f",&mm2);
             dm2 = mm2 / 10000;
             printf("square millimeter %.2f = square decimeter %.4f",mm2,dm2);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void dm2_mm2()
{
 do{
             system( "cls");
             printf("square dm to square mm\n\n");
             float mm2,dm2;
             printf("Enter the area of square decimeter : ");
             scanf("%f",&dm2);
             mm2 = dm2 * 10000;
             printf("square decimeter %.2f = square millimeter %.2f",dm2,mm2);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void mm2_cm2()
{
 do{
             system( "cls");
             printf("square mm to square cm\n\n");
             float mm2,cm2;
             printf("Enter the area of square millimeter : ");
             scanf("%f",&mm2);
             cm2= mm2*0.01;
             printf("square millimeter %.3f = square centimeter %.2f",mm2,cm2);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void cm2_mm2()
{
 do{
             system( "cls");
             printf("square cm to square mm\n\n");
             float mm2,cm2;
             printf("Enter the area of square centimeter : ");
             scanf("%f",&cm2);
             mm2 = cm2 * 100;
             printf("square centimeter %.2f = square millimeter %.2f",cm2,mm2);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void mm2_m2()
{
 do{
             system( "cls");
             printf("square mm to square m\n\n");
             float mm2,m2;
             printf("Enter the area of square millimeter : ");
             scanf("%f",&mm2);
             m2 = mm2 * 0.000001;
             printf("square millimeter %.2f = square meter %.6f",mm2,m2);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void m2_mm2()
{
 do{
             system( "cls");
             printf("square m to square mm\n\n");
            float m2,mm2;
    printf("Enter the area of square meter : ");
    scanf("%f",&m2);
    mm2 = m2 * 1000000;
    printf("square meter %.2f = square millimeter %.2f",m2,mm2);
             printf("\n\nAre you want to continue ? (y/n");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void mm2_km2()
{
 do{
             system( "cls");
             printf("square mm to square km\n\n");
             float mm2,km2;
             printf("Enter the area of square millimeter : ");
             scanf("%f",&mm2);
             km2 = mm2 * 0.000000000001;
             printf("square millimeter %.2f = square kilometer %.12f",mm2,km2);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void km2_mm2()
{
 do{
             system( "cls");
             printf("square km to square mm\n\n");
             float km2,mm2;
    printf("Enter the area of square kilometer : ");
    scanf("%f",&km2);
    mm2 = km2 * 1000000000000;
    printf("square kilometer %.2f = square millimeter  %.2f",km2,mm2);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void dm2_cm2()
{
 do{
             system( "cls");
             printf("square dm to square cm\n\n");
             float dm2,cm2;
             printf("Enter the area of square decimeter : ");
             scanf("%f",&dm2);
             cm2 = dm2 /100;
             printf("square decimeter %.2f = square centimeter %.2f",dm2,cm2);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void cm2_dm2()
{
 do{
             system( "cls");
             printf("square cm to square dm\n\n");
             float cm2,dm2;
             printf("Enter the area of square centimeter : ");
             scanf("%f",&cm2);
             dm2 = cm2 * 0.01;
             printf("square centimeter %.2f = square decimeter %.2f",cm2,dm2);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void dm2_m2()
{
 do{
             system( "cls");
             printf("square dm to square m\n\n");
             float dm2,m2;
             printf("Enter the area of square decimeter : ");
             scanf("%f",&dm2);
             m2 = dm2 /0.01;
             printf("square decimeter %.2f = square meter %.2f",dm2,m2);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void m2_dm2()
{
 do{
             system( "cls");
             printf("square m to square dm\n\n");
             float dm2,m2;
             printf("Enter the area of square meter : ");
             scanf("%f",&m2);
             dm2 = m2 /100;
             printf("square meter %.2f = square decimeter %.2f",m2,dm2);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void dm2_km2()
{
 do{
             system( "cls");
             printf("square dm to square km\n\n");
             float dm2,km2;
             printf("Enter the area of square decimeter : ");
             scanf("%f",&dm2);
             km2 = dm2 * 0.00000001;
             printf("square decimeter %.2f = square kilometer %.8f",dm2,km2);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void km2_dm2()
{
 do{
             system( "cls");
             printf("square km to square dm\n\n");
             float km2,dm2;
    printf("Enter the area of square kilometer : ");
    scanf("%f",&km2);
    dm2 = km2 * 100000000;
    printf("square kilometer %.2f = square decimeter %.2f",km2,dm2);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void cm2_m2()
{
 do{
             system( "cls");
             printf("square cm to square m\n\n");
             float cm2,m2;
             printf("Enter the area of square centimeter : ");
             scanf("%f",&cm2);
             m2 = cm2 * 0.0001;
             printf("square centimeter %.2f = square meter %.4f",cm2,m2);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void m2_cm2()
{
 do{
             system( "cls");
             printf("square m to square cm\n\n");
             float m2,cm2;
             printf("Enter the area of square meter : ");
             scanf("%f",&m2);
             cm2 = m2 * 10000;
             printf("square meter %.2f = square centimeter %.2f",m2,cm2);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void cm2_km2()
{
 do{
             system( "cls");
             printf("square cm to square km\n\n");
             float cm2,km2;
             printf("Enter the area of square centimeter : ");
             scanf("%f",&cm2);
             km2 = cm2 * 0.0000000001;
             printf("square centimeter %.2f = square kilometer %.10f",cm2,km2);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void km2_cm2()
{
 do{
             system( "cls");
             printf("square km to square cm\n\n");
             float km2,cm2;
    printf("Enter the area of square kilometer  : ");
    scanf("%f",&km2);
    cm2 = km2 * 10000000000;
    printf("square kilometer %.2f = square centimeter %.2f",km2,cm2);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);

}  while(n3=='y'&&'Y');
return main();
}
void m2_km2()
{
 do{
             system( "cls");
             printf("square m to square cm\n\n");
             float m2,km2;
             printf("Enter the area of square meter : ");
             scanf("%f",&m2);
             km2 = m2 *0.000001;
             printf("square meter %.2f = square kilometer %.6f",m2,km2);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
void km2_m2()
{
 do{
             system( "cls");
             printf("square km to square m\n\n");
             float km2,m2;
             printf("Enter the area of square kilometer : ");
             scanf("%f",&km2);
             m2 = km2 * 1000000;
             printf("square kilometer %.2f = square meter %.2f",km2,m2);
             printf("\n\nAre you want to continue ? (y/n)");
             scanf("%s",&n3);
}  while(n3=='y'&&'Y');
return main();
}
