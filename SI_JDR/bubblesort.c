#include <stdio.h>
void burbuja(int arreglo[], int size) {
int temp;
  for (int element = 0; element < size - 1; ++element) {
    for (int i = 0; i < size - element - 1; ++i) {
      if (arreglo[i] > arreglo[i + 1]) {
        temp = arreglo[i];
        arreglo[i] = arreglo[i + 1];
        arreglo[i + 1] = temp;
      }
    }
  }
}
void printarreglo(int arreglo[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", arreglo[i]);
  }
  printf("\n");
}

int main() {
  int data[] = {40, 15, 0, 31, -1,3,4,70};
  int size = sizeof(data) / sizeof(data[0]);
  printf("Arreglo Ordenado:\n");
  burbuja(data, size);
  printarreglo(data, size);
}