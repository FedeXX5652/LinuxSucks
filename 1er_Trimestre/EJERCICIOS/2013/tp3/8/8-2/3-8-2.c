/*c) Escriba una función que reciba un valor de temperatura en precisión doble, y
la escala de temperaturas de destino, y realice la conversión del valor.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "conv2.h"

int main() {
    char base;
    int conversor;
    double data;


    printf("Ingrese el primer valor: \n");
    scanf("%lf", &data);
    printf("\nValores de data: %lf\n\n", data);

    printf("Ingrese la escala de destino (C/F): \n");
    scanf("%s", &base);
    base = toupper(base);

    if (base != 'C' && base != 'F'){
        printf("Base de temperatura invalida\n");
        exit(-1);
    }
    
    base = tolower(base);
    printf("\nPasaje a °%c el valor %lf\n\n", base, data);

    

    if(base == 'f'){
        printf("Realizando conversion a FAHRENHEIT\n");
        conversor = 1;
        conv2(conversor, data);
    }

    else if(base == 'c'){
        printf("Realizando conversion a CELCIUS\n");
        conversor = 0;
        conv2(conversor, data);
    }

    return 0;
}