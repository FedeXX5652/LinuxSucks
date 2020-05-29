/*Escribir una función que convierta a mayúsculas una cadena de caracteres
recibida como argumento.
Prototipo: void strupr(char *);
*/

#include <stdio.h>
#include "strup.h"

int main()
{
	char cadena[] = {};
	printf("Ingrese una frase minuscula: ");
    scanf("%s", cadena);
    
    strup(cadena);

	return 0;
}