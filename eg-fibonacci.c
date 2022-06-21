#include <stdio.h>
 
int fibonacci(int n)
{
  if (n == 0 || n == 1)
    return n;
  else
    return (fibonacci(n-1) + fibonacci(n-2));
}
 
int main()
{
  int num, i = 0, j;
 
  printf("Ingrese un numero: ");
  scanf("%d", &num);
 
  printf("Los primeros %d terminos de la serie de fibonacci son: \n", num);
 
  for (j = 1; j <= num; j++)
  {
    printf("%d, ", fibonacci(i));
    i++;
  }
  return 0;
}