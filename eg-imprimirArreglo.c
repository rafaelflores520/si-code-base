#include <stdio.h>
#include <stdlib.h>

int main(){
    int size = 8;
    int array[size];
    printf("[");
    for (int i = 0; i < size; i++) {
    	array[i] = rand() % 100;
    	printf("%d,", array[i]);
    }
    printf("]");
}