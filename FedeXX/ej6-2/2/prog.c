/*2) Escribir un programa que solicite valores enteros ingresados por teclado correspondientes a mediciones
de altura expresadas en cm (main.c). Se desconoce la cantidad de valores a cargar, pero se sabe que se
finaliza la carga con el valor 0. Finalizado el ingreso de datos debe pedirle al usuario que indique cual es el
umbral de aceptación e invocar a la función “ObtenerMayores” (desarrolada previamente) que nos informará
cuantos superaron esa medida.*/

#include "link.h"

int main(int argc, char *argv[]){

    int umb = 0;
    int vec[argc-1];
    int contador = 0;
    int supera3 = 0;

    for ( int i=0 ; i<argc-1 ; i++ ){
        vec[i]=0;
    }

    for (int i = 1; i < argc; i++)
    {
        int aux = atol(argv[i]);
        if (aux != 0 )
        {
            vec[i-1] = aux;
        } 

        if (aux == 0 )
        {
            contador++;
        } 
    }

    argc = argc - contador;
    
    for (int i = 0; i < argc-1; i++)
    {
        printf("pos %d : %d\n",i,vec[i]);
    }

    printf("Ingrese umbral: ");
    scanf("%d", &umb);
    printf("\n");

    supera3 = ObtenerMayores(vec, argc-1, umb);

    printf("Supera3: %d \n", supera3);

    return 0;
}