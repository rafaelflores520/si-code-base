#include <stdio.h>
int power(int n1, int n2);

int main() {
    int base, potencia, resultado;
    printf("Ingrese un numero: ");
    scanf("%d", &base);
    printf("Ingrese potencia a elevar el numero: ");
    scanf("%d", &potencia);
    printf("%d^%d = %d", base, potencia, potencia_recursivo(base, potencia));
    return 0;
}

int potencia_recursivo(int base, int a) {
    if (a != 0) {
        return (base * potencia_recursivo(base, a - 1));
    }
    else {
        return 1;
    }
}