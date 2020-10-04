#include<stdio.h>
int main()
{float cm, m;
    printf("Enter the distance in meters : ");
    scanf("%f",&m);
         cm = m *100;
    printf("%.2f m = %.2f cm\n\n",m,cm);

return 0;
}
