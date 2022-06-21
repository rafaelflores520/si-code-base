#include <stdio.h>

long potenciaConWhile(long numero, long potencia)
{
    int resultado = numero;
    while (potencia > 1)
    {
        resultado = resultado * numero;
        potencia--;
    }
    return resultado;
}

void main(){
 long num=2, potencia=3;
 long result=potenciaConWhile(num, potencia);
 printf("Potencia: %d \n", result);

}