#include <stdio.h>
#include <math.h>

long long int factorial(int x){
  return x == 0 ? 1 : factorial(x-1) * x;
}

float seno(float x, float i){
  if(i == 0.0){
    return x;
  }
  float resN = (float) pow(-1, i);
  float resD = (float) factorial(2*i+1);
  float resP = (float) pow(x, 2*i+1);
  float res = (resN / resD) * resP;
  return res + seno(x, i-1);
}

int main(void) {
  float x = 40.0;
  x = x*(3.1415/180);
  float i = 5.0;
  printf("Resultado: %f\n", seno(x, i));
  return 0;
}
