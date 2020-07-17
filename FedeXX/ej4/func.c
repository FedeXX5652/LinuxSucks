#include "link.h"

void funcA (){

    int x[2];

    printf("Ingrese la pendiente y la coordenada ´y´ de la ordenada al origen separados por un espacio:\n");
    
    scanf("%d %d", &x[0], &x[1]);
    printf("m=%d --- b=%d\n", x[0], x[1]);

    printf("La ecuación de la recta resulta en:\n y=%dx+%d", x[0], x[1]);
    printf("\n");
}

void funcB (){
    int x[3];

    printf("Ingrese los valores de A, B y C separados por un espacio:\n");
    
    scanf("%d %d %d", &x[0], &x[1], &x[2]);
    printf("A=%d --- B=%d --- C=%d\n", x[0], x[1], x[2]);

    printf("La ecuación cuadratica resulta en:\n y=%dx²+%dx+%d", x[0], x[1], x[2]);
    printf("\n");
}