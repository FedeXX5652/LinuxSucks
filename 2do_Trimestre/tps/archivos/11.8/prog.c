/*Escribir un programa que utilizando las funciones ya desarrolladas e incluidas en
una librería, convierta un archivo de texto a minúsculas o mayúsculas,
dependiendo de la selección hecha por el usuario:
Uso: chgcase <path archivo origen> <path archivo destino> <formato>
en donde el formato puede ser:
-u : a mayúsculas (UPPERCASE)
-l : a minúsculas (LOWERCASE)*/

#include "link.h"

int main(){
    char in[256];
    char out[256];
    char lowup;
    bool uplow;

    printf("Ingrese path entrada:\n");
    scanf("%s",in);
    printf("Ingrese path salida:\n");   
    scanf("%s",out);
    printf("Ingrese formato:\n");
    scanf(" %c", &lowup);

    if(lowup=='u'){
        uplow=false;
    }
    if(lowup=='l'){
        uplow=true;
    }

    chgcase(in, out, uplow);
}