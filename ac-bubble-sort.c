#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int a[] = {4, 3, 6, 2, 5, 9, 3, 1, 7, 0};
    int length = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < length - 1; i++)
    {
        bool swap = false;
        for (int j = 0; j < length; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j]= a[j+1];
                a[j+1]=temp;
                swap = true;
            }
        }
        if(!swap){
            break;
        }
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }
    

    return 0;
}