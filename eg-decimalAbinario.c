#include<stdio.h>    
#include<stdlib.h> 

int main(){  
    int arreglo[10], n, i; 
    printf("Ingrese el decimal a convertir: ");    
    scanf("%d", &n);    
    for(i = 0; n > 0; i++) {    
        arreglo[i] = n % 2;
        n = n / 2;
    }    
    printf("\nEl decimal en binario es: ");    
    for(i = i - 1; i >= 0; i--) {    
        printf("%d", arreglo[i]);    
    }    
    return 0;
} 