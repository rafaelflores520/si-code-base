#include <stdio.h>

int main(void){
    int array[] = {1,2,3,4,5,7,8};
    int size = sizeof(array)/sizeof(array[0]);
    for (int i = 0; i < size; i++)
    {
        if(i==0){
            printf("Arraeglo: %d",array[i]);
        }else{
            printf(", %d",array[i]);
        }
    }
    
    return 0;
}