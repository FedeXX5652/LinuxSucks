/* Grupo 3
Realice un programa que indique si la letra ingresada es mayúscula, 
minúscula, un número u otro carácter.
Verifique el funcionamiento con los siguientes casos.

Valores de entrada| stdout(pantalla)
------------------|-----------------
desde a hasta z Es| una letra minúscula
desde A hasta Z Es| una letra mayúscula
desde 0 hasta 9 Es| un número
Otro caracter     | Es otro caracter  */

#include <stdio.h>
#include "2caracter.h"

int main(){
    char string[0];
    char s;

    printf("Ingrese un caracter \n");
    scanf("%s", string);

    s = caracter(string[0]);

    printf("%s\n", s);

    return 0;
}