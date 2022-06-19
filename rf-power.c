#include <stdio.h>

int power(int n, int exps){
    if (exps == 1){
        return n;
    }
    return n * power(n, exps-1);
}

int main()
{
    int n = 5;
    int res = power(n, 2);
    printf("Pow: %d", res);
    return 0;
}
