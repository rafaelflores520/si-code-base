#include <stdio.h>
#include <stdlib.h>
#define n 6

int main(){
    int arr[n];
    printf("Arreglo normal: ");
    for (int i = 0; i < n; i++) {
    	arr[i] = rand() % 25;
    	printf("%d,", arr[i]);
    }
    int temp;
    printf("\n");
    for(int i = 0; i < n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    printf("Arreglo invertido: ");
    for(int i = 0; i < n; i++){
        printf("%d,", arr[i]);
    }
}