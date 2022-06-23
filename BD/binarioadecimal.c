#include <stdio.h>
void main()
{
    int  num=10001, decimal = 0, base = 1, rem;
 
    printf("Binario: %d \n", num);
    while (num > 0)
    {
        rem = num % 10;
        decimal = decimal + rem * base;
        num = num / 10 ;
        base = base * 2;
    }
    printf("Decimal: %d \n", decimal);
}