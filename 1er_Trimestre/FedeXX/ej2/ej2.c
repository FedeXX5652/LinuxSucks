#include "link.h"

int main(){
    char ingresada[TAM] = "";

    printf("Ingrese la palabra: \n");
    fgets(ingresada, TAM, stdin);

    func(ingresada);

    return 0;
}