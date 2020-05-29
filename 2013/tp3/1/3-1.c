/*Escribir una función que reciba dos números reales como argumento y devuelva
su MCD claculado mediante el algoritmo de Euclides.*/

#include <stdio.h>
#include "mcd.h"

int main(){
    int a;
    int b;
    int result;

    printf("Ingrese un valor A:\n");
    scanf("%d", &a);

    printf("Ingrese un valor B:\n");
    scanf("%d", &b);

    result = maximo_comun_divisor(a,b);

    printf("MCD: %d\n",result);

    return 0;
}