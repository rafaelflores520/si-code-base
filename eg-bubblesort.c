#include <stdio.h>
#include <stdlib.h>

int main() {
  	int array[100], size = 7, swap;
  	printf("Arreglo desordenado: \n");
  	for (int i = 0; i < size; i++) {
    	array[i] = rand() % 100;
    	printf("%d,", array[i]);
    }
    printf("\n \n");
  	for (int i = 0; i < size - 1; i++) {
    	for (int j = 0 ; j < size - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				swap = array[j];
				array[j] = array[j + 1];
				array[j + 1] = swap;
    		}
		}
  	}
  	printf("Arreglo ordenado: \n");
  	for (int i = 0; i < size; i++) {
     	printf("%d,", array[i]);
    }
  	return 0;
}