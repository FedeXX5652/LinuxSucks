/*Escriba una función que reciba dos argumentos enteros x e y, y devuelva xy.*/

#include <stdio.h>
#include "pot.h"

int main (){
    int x;
    int y;
    int res;

    printf("Ingrese un valor X:\n");
    scanf("%d", &x);

    printf("Ingrese un valor Y:\n");
    scanf("%d", &y);

    res = pot(x, y);
    
    printf("Resultado: %d\n", res);
    return 0;
}