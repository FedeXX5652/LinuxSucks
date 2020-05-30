/*Escribir una función que responda al siguiente prototipo:
void replace (char *s, char nuevo, char viejo) ;
y reemplace en la cadena "s" todas las apariciones del caracter "viejo" por el
carácter "nuevo".*/

#include <stdio.h> 
#include <string.h>
#include "replace.h"

int main(void){

    char s[] = "De x1 a x2"; 
    char viejo[] = "x"; 
    char nuevo[] = "Info";

    replace(s, nuevo, viejo);

    return 0;
}