#include <stdio.h>
#include <stdlib.h>

int main() {         
    int length = 9;
    int arreglo[length];
    for (int i = 0; i < length; i++) {
    	arreglo[i] = rand() % 100;
    }     
    printf("Los elementos duplicados son: \n");    
    for(int i = 0; i < length; i++) {    
        for(int j = i + 1; j < length; j++) {    
            if(arreglo[i] == arreglo[j])    
                printf("%d, ", arreglo[j]);    
        }    
    }    
    return 0;    
} 