#include <stdio.h>
int main() {
    int n=3, i;
    unsigned long long fact = 1;
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial de %d = %llu", n, fact);

    return 0;
}