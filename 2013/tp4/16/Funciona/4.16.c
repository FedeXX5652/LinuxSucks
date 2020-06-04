/*Escribir una función que reciba como parámetro una cadena de caracteres que
finaliza con espacios en blanco, y los elimine desplazando los caracteres útiles
hacia la izquierda. (operación "right-trim").
Prototipo: void right_trim (char *) ;*/

#include <stdio.h>
#include "4.16_lib.h"

int main (void){

	char word [40];
	
    printf("Ingrese el la cadena ");
	fgets (word, 40, stdin);
	
    right_trim (word); 
	
	printf("Cadena sin espacios %s\n", word);
}

