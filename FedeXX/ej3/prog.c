/*Realizar las funciones (incluyendo una función) main donde se imprimirán los resultados tal que
ingresando por linea de comandos grupos de 6 palabras se imprima:
• La cantidad de caracteres.
• La cantidad de vocales.
• Y la cantidad de consonantes de cada palabra.
Deberá controlar que se hayan ingresado la cantidad de argumentos correcta y emitir un mensaje en caso
de no serlo y pedir el reingreso.*/

#include "link.h"

int main(int argc, char *argv[]){

    if((argc-1) > 6){
        printf("Error al ingresar los argumentos\nMUCHO TEXTO\n");
        return -1;
    }

    contadores(argc,argv);

    return 0;
}