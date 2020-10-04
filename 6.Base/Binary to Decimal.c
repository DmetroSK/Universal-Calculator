#include <stdio.h>

int main()
{
    int Binary, Decimal = 0, base = 1, z;

    printf("Binary Number :");
    scanf("%d", &Binary);
    int n = Binary;
    while (n > 0)
    {
        z = n % 10;
        Decimal= Decimal + z * base;
        n = n/10 ;
        base = base * 2;
    }

    printf("Decimal Number :%d ", Decimal);
    return 0;
}
