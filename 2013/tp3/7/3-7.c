/*Escribir una función que calcule el factorial de un número natural pasado como
parámetro, en forma iterativa. Realizar todas las validaciones que considere
necesarias.*/

#include <stdio.h>
#include "factorial.h"

int main(){

    long int Resultado=0;
    long int x;

   
    printf("Introduzca No. para calcular el factorial ...: ");
    scanf(" %ld", &x);

    Resultado = fact(x);

    printf(" 1 = %ld\n\n",Resultado);

    return 0;
}