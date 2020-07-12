/*1. Realizar un programa que por línea de comando reciba una cantidad indeterminada de argumentos. Los mismos serán considerados como términos de una serie del tipo entero.
Se deberá presentar por stdout las siguientes operaciones:

-Suma de todos los términos
-Promedio de todos los términos
-El mayor de todos
-El menor de todos

Se tiene que validar los errores que considere pertinente terminado el programa con un código
de error para cada caso. Si la finalización es exitosa, terminará con código de retorno 0. El
programa deberá tener un solo punto de salida.*/

#include "link.h"



int main (int argc, char *argv[]){

    
    int error = 0;
    int num[argc-1];

    for ( int i=0 ; i<argc-1 ; i++ ){
        num[i]=0;
    }


    for ( int i=1 ; i<argc ; i++ )
    {
        

        num[i-1] = atol(argv[i]);

    }

    for ( int i=0 ; i<argc-1 ; i++ )
    {
        printf("Numero %d = %d\n\n",i,num[i]);
    }

    error = operator(num);

    return error;

    
    
}