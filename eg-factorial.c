#include<stdio.h>  
  
long factorial(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * factorial(n-1));  
}  
   
int main()  
{  
  int num;  
  long fact;  
  printf("Ingrese un numero: ");  
  scanf("%d", &num);   
   
  fact = factorial(num);  
  printf("El factorial de %d es: %ld\n", num, fact);  
  return 0;  
} 