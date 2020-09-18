/*Escribir un programa que genere un archivo de texto con los caracteres que el
operador ingrese por stdin.
Sugerencia: Revise que secuencia de teclas representa EOF para stdin.
*/

#include "link.h"

int main (){

    int len;

    printf("Ingrese el tamaño de la string: \n");
    scanf("%d\n", &len);
    printf("Tamaño de su string: %d\n",len);
    
    char text[len];

    fgets(text,len,stdin);

    printf("SU BASURA: %s\n", text);

    file(text);
}