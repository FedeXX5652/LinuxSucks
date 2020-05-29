/*Escribir una función que simule el tiro de un dado.*/

#include <stdio.h>
#include "dado.h"

int main (){

    
    int res = 0;
    
    res = dado();
    printf("Salió un %d\n",res);
    return 0;
}