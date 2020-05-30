/*Escribir una función que reciba como parámetro una cadena de caracteres que
comienza con espacios en blanco, y los elimine desplazando los caracteres útiles
hacia la izquierda. (operación "left-trim").
Prototipo: void left_trim (char *) ;*/

#include <stdio.h>
#include "left_trim.h"
#define lim 20

int main(void){

    char s[lim];

    printf("Ingrese una nueva string:");
    fgets(s, lim, stdin); 

    left_trim (s);

    return 0;
}