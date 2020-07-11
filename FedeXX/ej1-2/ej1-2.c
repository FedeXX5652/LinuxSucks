//gcc -o ej1-2 ej1-2.c func.c -Wall

#include "link.h"

int main(){

    char entrada[TAM], *codificada;
    int devuelve , longitud ,i;

    printf("Ingrese el codigo:\n");
    fgets(entrada, sizeof(entrada), stdin);

    longitud = strlen (entrada);
    printf ("Lenght: %d\n", longitud);

    for (i =0; entrada [i ]!= '\0';i ++) {
    }
    entrada [i -1]= '\0';

    codificada = (char *) malloc ( longitud * sizeof(char));

    devuelve = rot_13 ( entrada, codificada );
    if ( devuelve == -1){
        printf ("el mensaje contiene un caracter distinto de una letra o un espacio\n");
    }
    else{
        printf ("el mensaje %s fue codificado a %s\n" ,entrada , codificada );
        printf ("la cantidad intercambiada fue de: %d\r\n" ,devuelve );
    }
    free (codificada);

    return 0;
}