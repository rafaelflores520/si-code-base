#include <stdio.h>

void printArr(int* arr, int size){
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

    

int main()
{
    int arr[] = {5, 2, 6, 3, 7, 5};
    int size = sizeof(arr) / sizeof(int);
    int inverted[size];
    for (int i = 0; i < size; i++) {
        inverted[size-i-1]=arr[i];
    }
    printf("Inverted: \n");
    printArr(inverted, size);
    return 0;
}
