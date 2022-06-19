#include <stdio.h>
#include <math.h>

long long int factorial(int x){
  return x == 0 ? 1 : factorial(x-1) * x;
}

int main(void) {
  int n = 6;
  printf("Resultado: %lld\n", factorial(n));
  return 0;
}
