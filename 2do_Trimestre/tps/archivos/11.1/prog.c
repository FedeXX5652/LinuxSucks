/*Escriba un programa que lea el archivo de texto que recibe por línea de
comandos y determine:
-Cantidad total de palabras
-Cantidad de veces que aparece la palabra "DIO"
*/

#include "link.h"

int main(int argc, char *argv[]){

    
    char str[256] = "";
    char palabra[] = "DIO";
    

    int i=0;
	printf("Primer ejemplo\n");
    printf("%d es argc\n", argc);

    

    for (i=1; i<argc; i++){
        
        strcpy(str,argv[i]);
    }
    
    func(str, palabra);
}