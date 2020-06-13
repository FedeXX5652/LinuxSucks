/*a) Defina un tipo de dato "tipodato" a partir del tipo nativo "float" (usando
typedef)
b) Defina un tipo enumerativo "tescala" que contenga los símbolos CELSIUS y
FAHRENHEIT.
c) Escriba una función que reciba un valor de temperatura en precisión doble, y
la escala de temperaturas de destino, y realice la conversión del valor.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "conv.h"

typedef struct tripodato {
   double data1;
   double data2;
   double data3;
} data;

enum tescala {
    c = 'C',
    f = 'F'
};

int main() {

    data data;
    enum tescala escala;
    char base;
    int conversor;


    printf("Ingrese el primer valor: \n");
    scanf("%lf", &data.data1);
    printf("Ingrese el segundo valor: \n");
    scanf("%lf", &data.data2);
    printf("Ingrese el tercer valor: \n");
    scanf("%lf", &data.data3);
    printf("\nValores de data: %lf - %lf - %lf\n\n", data.data1, data.data2, data.data3);

    printf("Ingrese la escala (C/F): \n");
    scanf("%s", &base);
    base = toupper(base);

    if (base != 'C' && base != 'F'){
        printf("Base de temperatura invalida\n");
        exit(-1);
    }
    
    base = tolower(base);
    escala = base;
    printf("\nValores finales de data: %lf°%c - %lf°%c - %lf°%c\n\n", data.data1, escala, data.data2, escala, data.data3, escala);

    

    if(escala == 'c'){
        printf("Realizando conversion a FAHRENHEIT\n");
        conversor = 1;
        conv(conversor, data.data1, data.data2, data.data3);
    }

    else if(escala == 'f'){
        printf("Realizando conversion a CELCIUS\n");
        conversor = 0;
        conv(conversor, data.data1, data.data2, data.data3);
    }

    return 0;
}