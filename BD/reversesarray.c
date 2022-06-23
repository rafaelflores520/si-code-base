#include <stdio.h>
 

void printarreglo(int arreglo[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", arreglo[i]);
  }
  printf("\n");
}

int main()
{
    int data[] = {40, 15, 0, 31, -1,3,4,70};
    int datanuevo[]={40, 15, 0, 31, -1,3,4,70};
    int t, i, j;
    int temp;
    j = 0;
    t = 8;
    printarreglo(data,8);
    for (i = t - 1; i >= 0; i--)
    {
      datanuevo[j++] = data[i];
    }
 
    printarreglo(datanuevo, t);
    
    return 0;
}