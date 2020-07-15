#include "link.h"

int main(int argc, char *argv[]){

    int res = 0;
    char car;
    char pete = 0;
    char *var = &pete;

    if (argc-1 != 1){
        printf("Error, ingrese solo una palabra\n");
        return -1;
    }
    
    for(int i=1; i<argc; i++){
        printf("Palabra %d: ", i);
        printf("%s\n", argv[i]);
    }

    printf("Ingrese el valor a cambiar: ");
    scanf("%c", &car);

    res = reemplazo(argv[1], var, car);

    if(res == 1){
        printf("Conversión realizada correctamente\n");
    }

    if(res == 0){
        printf("No se pudo realizar la conversión\n");
    }

    return 0;
}