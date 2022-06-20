#include <stdio.h>

int duplicates (int* arr, int length){
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (arr[i] == arr[j])
                return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {5, 2, 6, 3, 7, 5};

    int length = sizeof(arr) / sizeof(arr[0]);

    int resultado = duplicates(arr,length);

    printf("Elementos duplicados?: %s", resultado ? "True" : "False");

    return 0;
}