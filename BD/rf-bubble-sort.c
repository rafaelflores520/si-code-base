#include <stdio.h>
#include <stdbool.h>

void printArr(int* arr, int size){
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int* org, int n){
    bool swapped = false;
    do {
        swapped = false;
        for (int i = 1; i <= n-1; i++) {
           if (org[i-1] > org[i]){
               int temp = org[i-1];
               org[i-1] = org[i];
               org[i] = temp;
               swapped = true;
           }
        }
    }while(swapped);
}

int main()
{
    int pos[] = {4, 3, 6, 2, 5, 9, 3, 1, 7, 0};
    int size = sizeof(pos) / sizeof(pos[0]);
    bubbleSort(pos, size);
    printArr(pos, size);
    return 0;
}
