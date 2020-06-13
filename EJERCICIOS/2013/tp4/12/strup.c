#include <stdio.h>
#include <ctype.h>

void strup (char *cadena){

    for (int indice = 0; cadena[indice] != '\0'; ++indice){
		cadena[indice] = toupper(cadena[indice]);
	}
	printf("Cadena despues de ser convertida: %s\n", cadena);

}