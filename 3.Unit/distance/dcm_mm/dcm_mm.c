
#include<stdio.h>
int main()
{float mm, cm;
    printf("Enter the distance in centimeters : ");
    scanf("%f",&cm);
    while(cm!=-99)
    {
         mm = cm *10;
    printf("The equivalent distance in millimeters is : %f\n\n",mm);
    printf("Enter the distance in centimeters : ");
    scanf("%f",&cm);

    }

return 0;
}
