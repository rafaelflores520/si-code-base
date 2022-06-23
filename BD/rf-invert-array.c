#include <stdio.h>

void printArr(int* arr, int size){
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void invert(int* arr, int size){
    for (int i = 0; i < size/2; i++) {
        int temp = arr[i];
        arr[i] = arr[size -i -1];
        arr[size -i -1] = temp;
    }
}

int main()
{
    int arr[] = {5, 2, 6, 3, 7, 5};
    int size = sizeof(arr) / sizeof(int);
    invert(arr, size);
    printf("Inverted: \n");
    printArr(arr, size);
    return 0;
}
