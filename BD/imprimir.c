#include <stdio.h>

void printarreglo(int arreglo[], int size) {
  int num=0;
  while (num < size)
    {
     printf("%d  ", arreglo[num]);
     num++;   
    }
}

void main(){
    int arreglo[]={1,2,3,4,2};
    int size=sizeof(arreglo)/sizeof(int);
    printarreglo(arreglo,size);
}
