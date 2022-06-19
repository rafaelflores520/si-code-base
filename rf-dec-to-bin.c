#include <stdio.h>
#include <math.h>

void decToBin(int n, char* arr, int size){
    for(int i = size-1; i >= 0; i--){
        arr[i] = n % 2 + 48;
        n /= 2;
    }
}

int main()
{
    int n = 10;
    int size = log2(n) + 1;
    char arr[size];
    decToBin(n, arr, size);
    printf("Bin: %s", arr);
    return 0;
}
