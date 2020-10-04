#include<stdio.h>
int main()

{float kilometers,meters,x=0,y;
    printf("Enter the converter press 1\nExit the converter press any key\n");
    scanf("%f",&y);
    while(y==1)
    {

        printf("\n\tplease enter what you want to convert :\n\n you want to convert kilometers to meters and press\t 1\n you want to convert meters to kilometers and press\t 2\n\n");
        scanf("%f",&x);


        if(x==1)
        { system("cls");
            printf("\tplease enter kilometers, to convert kilometers to meters :\n\n");
            scanf("%f",&kilometers);
            meters = kilometers*1000;
            printf("\tmeters : %f\n",meters);
        }

        else if(x==2)
        {
            printf("\tplease enter meters, to convert meters to kilometers :\n\n");
            scanf("%f",&meters);
            kilometers = meters/1000;
            printf("\tkilometers : %f\n",kilometers);
        }
        else
        {
            printf("wrong input try again");
        }

    }
    printf("\nsuccessfully Excited");
    return 0;

}



