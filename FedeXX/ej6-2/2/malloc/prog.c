/*2) Escribir un programa que solicite valores enteros ingresados por teclado correspondientes a mediciones
de altura expresadas en cm (main.c). Se desconoce la cantidad de valores a cargar, pero se sabe que se
finaliza la carga con el valor 0. Finalizado el ingreso de datos debe pedirle al usuario que indique cual es el
umbral de aceptación e invocar a la función “ObtenerMayores” (desarrolada previamente) que nos informará
cuantos superaron esa medida.*/

#include "link.h"

int main(void){

    int i = 0;
    int umbral = 0;
    int *vec;
	int *aux;
    int res = 0;

    vec = malloc (sizeof (int));
    aux = malloc (sizeof (int));

    do{
        scanf("%d", (vec+i));
        *aux = *(vec+i);
        if(*aux != 0){
            i++;
            vec = realloc (vec, (i + 1) * sizeof (int)); //ver que onda
        }
    }
    while(*aux != 0);

    printf("Ingrese el umbral que desea evaluar: \n");
    scanf ("%d", &umbral);
    res = ObtenerMayores(vec, i, umbral);
	free(vec);
    free(aux);

    printf("Resultado= %d\n",res);

    return 0;
}