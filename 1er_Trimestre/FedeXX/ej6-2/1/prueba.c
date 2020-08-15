/*1) Desarrollar una función que informe cuantos valores de un array superan un determinado umbral.
Prototipo:
int ObtenerMayores(int *, int, int); // En milib.h
El primer argumento corresponde al vector, el segundo a la longitud del mismo y el tercero al umbral.*/

#include "link.h"

int main (){

    int umb = -10;
    int supera3;
    int vec[] = {25, 8, 10, 400, 5, -40};
    int tam = sizeof(vec)/sizeof(vec[0]);

    printf("TAM: %d\n",tam);

    supera3 = ObtenerMayores(vec, tam, umb);

    printf("Supera3: %d \n", supera3);
    
    return 0;
}