/*
    Ejercicio 2.33.
    Escribir un programa que calcule el promedio de 10 valores numéricos
    ingresados por teclado.
*/

#include <stdio.h>

int main(void){

    float n1;
    float nt = 0;
    float res = 0;
    int i = 0;

    printf("Introduzca los números a promediar ...: \n");
    
   

    for (i=0;i<10;i++){
    printf("Valor: \n");
    scanf("%f", &n1);
    nt = nt + n1;
    }

    res = (nt)/10;

    printf("Promedio = %f", res);

    return 0;
}