#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
long int numero = 0;
int multiplicador = 0;
int potencia = 0;

while (multiplicador < 10)
{
potencia = pow(10, multiplicador);

numero = numero+(3 * potencia);
multiplicador ++;
printf( "\n Resultado%ld", numero );
}
}