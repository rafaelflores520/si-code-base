#include <stdio.h>

int main()
{
    int i, fact = 1, number=6;
    for (i = 1; i <= number; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is: %d", number, fact);
    return 0;
}