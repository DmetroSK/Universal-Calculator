#include<stdio.h>
int main()
{float kg,mg;
    printf("Enter the mas in milligrams : ");
    scanf("%f",&mg);
    kg = mg/1000000;
    printf("%.2f mg = %.6f kg\n\n",mg,kg);
    return 0;
}


