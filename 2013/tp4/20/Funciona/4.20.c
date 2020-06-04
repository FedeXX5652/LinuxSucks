/*
Escribir una función que reciba como parámetros un puntero a una secuencia
de doubles y la cantidad de elementos que componen la secuencia, y devuelva al
máximo (o el mínimo) valor contenido en la misma.

*/

#include <stdio.h>
#include "4.20_lib.h"

int main (void){

    int cant = 0, i;
	
    printf("Ingrese la cantidad de valores que desea que tenga el vector: ");
	scanf("%d", &cant);

    double vector[cant];
	
    printf("Ingrese los valores deseados: \n");

    for (i = 0; i < cant; i++)
    {
        scanf("%lf", &(vector[i]));
    }

    max_min(vector, cant);    
	
	printf("Minimo:\t%0.0lf\n", vector[0]);
	printf("Maximo:\t%0.0lf\n", vector[cant - 1]);

return 0;
}

