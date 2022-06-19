#include <stdio.h>

int duplicates(int* arr, int size){
    for (int i = 0; i <= size-2; i++){
        for (int j = i+1; j < size; j++) {
            if (arr[i] == arr[j]){
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[] = {5, 2, 6, 3, 7, 5};
    int size = sizeof(arr) / sizeof(int);
    int res = duplicates(arr, size);
    printf("Dup's?: %s", res ? "True" : "False");
    return 0;
}
