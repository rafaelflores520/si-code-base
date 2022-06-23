#include <stdio.h>
#include <math.h>

int binaryToDec(char* bin, int n, int init){
    if (!n){
        return bin[init] == 49 ? 1 : 0;
    }
    return binaryToDec(bin, n - 1, init + 1) + (bin[init] == 49 ? pow(2, n) : 0);
}

int main()
{
    char bin[] = "01000101";
    int size = sizeof(bin) / sizeof(bin[0]);
    int res = binaryToDec(bin, size-2, 0);
    printf("%d", res);
    return 0;
}
