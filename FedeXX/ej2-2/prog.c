/*Escribir el código de un programa que lea su entrada desde teclado o si lo prefiere que reciba su entrada
como argumentos del main.
Una vez leído deberá presentar en pantalla el resumen compuesto por:
• Cantidad de líneas recibidas.
• Cantidad de palabras recibidas.
• Cantidad de caracteres recibidas.
Condiciones:
• Una línea termina con el carácter '/n'.
• Las palabras pueden ir separadas por uno o mas espacios (' ') o por uno o mas tabuladores ('\t')
• Si se toma el ingreso por teclado, para finalizar se debe enviar un EOF (se pulsa CTRL+D).
• No usar funciones definidas en “string.h”.
• Escribir en un archivo separado, llamado funciones.c todo el código que no forme parte de main.*/

#include "link.h"

int main(int argc, char *argv[]){

    char frase[argc-1];
    int TAM = (sizeof(frase)/sizeof(frase[0]));
    printf("TAMAÑO: %d\n",TAM);

    func(argc, argv);

   

    return 0;
}