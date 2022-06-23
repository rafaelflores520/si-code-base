#include <stdio.h>

int fibonacci(int lim){
    if(lim == 0){
        return 0;
    }else if(lim == 1){
        return 1;
    }
    return fibonacci(lim - 1) + fibonacci(lim - 2);
}

int main()
{
    int pos = 8;
    int res = fibonacci(pos);
    printf("El fibonacci en la %d pos es: %d", pos, res);
    return 0;
}
