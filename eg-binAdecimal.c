#include <stdio.h>
#include <math.h>

int main() {
  long long n;
  printf("Ingrese un numero binario: ");
  scanf("%lld", &n);
  printf("%lld en binario = ");
  int dec = 0, i = 0, residuo;
  while (n != 0) {
    residuo = n % 10;
    n /= 10;
    dec += residuo * pow(2, i);
    ++i;
  }
  printf("%lld en decimal", dec);
  return 0;
}