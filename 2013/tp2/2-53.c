/*
El valor aproximado del número de Euler, e , se puede obtener con la siguiente
fórmula: e = 1 + 1/1! + 1/2! + 1/3! + 1/4! + 1/5! + ...
Escribir un programa que calcule el valor aproximado de e mediante un ciclo
repetitivo que termine cuando la diferencia entre dos aproximaciones sucesivas
difiera en menos de 10-9.
*/

#include <stdio.h>
#include "./../../libs/factorial.h"


int main() {

double dif = 1;
double e = 1;
int num = 0;
double umbral = 0.000000001;

while (dif>umbral)
{
    num++;
    dif = (e + 1/fact(num)) - e;
    e = e + 1/fact(num);
}

printf("e= %.9f \n",e);
}