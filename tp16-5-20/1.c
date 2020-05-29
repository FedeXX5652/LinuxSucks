/* Grupo 3
Escriba un programa donde ingresa por teclado un par de valores reales no nulos X e Y, que
representan las coordenadas rectangulares de distintos puntos en el plano. Se pide determinar
e informar por pantalla:

a) Si ambos valores son cero.

b) A cúal cuadrante pertenece el punto ?.

c) Distancia al origen de coordenadas usando
    r=√a²+b²
*/

#include <stdio.h>
#include <math.h>
#include "1cuad.h"

int main(void){

    int x;
    int y;
    float r;
    int cuad1 = 0;

    printf("Ingresar el valor de X: ");
    scanf("%d", &x);

    printf("Ingresar el valor de Y: ");
    scanf("%d", &y);

    if (x==0 && y==0){
        printf("El punto se encuentra en el origen \n");
    }

    else{

        cuad1 = cuadrante (x, y);

        printf("El punto se encuentra en el cuadrante: %d\n", cuad1);

    }

    r = sqrt (pow(x, 2) + pow(y, 2));  //r=√a²+b²

    printf("El punto se encuentra a %f unidades del origen \n", r);

    return 0;
}