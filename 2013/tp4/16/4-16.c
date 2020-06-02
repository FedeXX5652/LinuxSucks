/*Escribir una función que reciba como parámetro una cadena de caracteres que
finaliza con espacios en blanco, y los elimine desplazando los caracteres útiles
hacia la izquierda. (operación "right-trim").
Prototipo: void right_trim (char *) ;
*/

#include <stdio.h>
#include "right_trim.h"
#define lim 20

int main(void){

    char s[lim];

    printf("Ingrese una nueva string:");
    fgets(s, lim, stdin); 

    right_trim (s);

    return 0;
}