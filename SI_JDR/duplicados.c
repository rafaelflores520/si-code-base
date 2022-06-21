#include <stdio.h>    
     
int main()    
{   // arreglo
    int arr[] = {1, 2, 9, 4, 2, 7, 8, 8, 9};     
    // captura el size del arreglo    
    int length = sizeof(arr)/sizeof(arr[0]);
    //enecuentra los duplicados  
    for(int i = 0; i < length; i++) {    
        for(int j = i + 1; j < length; j++) {    
            if(arr[i] == arr[j])    
                printf("%d\n", arr[j]);    
        }    
    }    
    return 0;    
}  