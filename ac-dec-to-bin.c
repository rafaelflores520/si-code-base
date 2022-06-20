
#include <stdio.h>
#include <math.h>

long long convert(int);

int main()
{
    long long n_decimal = 10, bin;
    bin = convert(n_decimal);
    printf("%d in decimal =  %lld in binary", n_decimal, bin);
    return 0;
}

long long convert(int n)
{
    long long bin = 0;
    int rem, i = 1;

    while (n != 0)
    {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }

    return bin;
}