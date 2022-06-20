#include <stdio.h>

int main()
{
    int n = 5;
    int res = n;
    int potencia = 2;
    for (int i = 1; i < potencia; i++)
    {
        res=res*n;
    }
    
    printf("Pow: %d", res);
    return 0;
}
