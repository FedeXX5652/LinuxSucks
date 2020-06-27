/*Escribir una función que reciba como argumentos dos punteros a char “t” y “s”,
que apunta cada uno a una secuencia de bytes terminados en '/0', y realice la
concatenación de la secuencia “s” a continuación de la secuencia “t”, terminando
la secuencia de bytes resultante con el caracter '\0' (Función strcat() de la
biblioteca <string.h>).
El prototipo de la función pedida es:
void my_strcat (char *t, const char *s) ;*/


#include "lib.h"

int main(void){
    
    char t[40];
    const char s[30] = "@gmail.com";

    printf("Escriba su username de mail:");
    scanf("%s", t);
    printf("Su nombre de usuario es: %s\n", t);

    my_strcpy (t, s);

    return 0;
}