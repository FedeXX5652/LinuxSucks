#include "link.h"

int operator(int *num, int TAM){
    
    int suma=0;
    float prom=0;
    int mayor=num[0];
    int menor=num[0];
    

    printf("TAMAÑO: %d\n",TAM);

    for(int i=0; i<TAM; i++){
        suma = suma + num[i];
    }

    for(int i=0; i<TAM; i++){
        prom = (float)suma/TAM;
    }

    for(int i=0; i<TAM; i++){
        if(mayor < num[i]){
            mayor = num[i];
        }

        if(menor > num[i]){
            menor = num[i];
        }
    }

    
    
    printf("SUMA: %d\n", suma);
    printf("PROMEDIO: %.2f\n",prom);
    printf("MAYOR: %d\n", mayor);
    printf("MENOR: %d\n", menor);
    
    return 0;
}