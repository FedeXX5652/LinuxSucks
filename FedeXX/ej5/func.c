#include "link.h"

char **extraer_palabras(char *str){

    char *p;
    
    int palabras = 1;
    char delim[2] = " ";
    int w=0;
    
    for(int i=0; i<strlen(str); i++){
        if(str[i]==' '){
            palabras++;
        }
    }

    char *p2[palabras];

    printf("Palabras-func1: %d\n", palabras);

    p = strtok(str, delim);
   
    while( p != NULL ){
        
    

        p2[w] = malloc((strlen(p)+1)*sizeof(char));
        strcpy(p2[w], p);
        
        w++;
        
        
        p = strtok(NULL, delim);
    } 

    

    
    
    return p2;
}


void imprimir_palabras(char **vec){

    //int tam = sizeof(vec);
    //printf("TAM: %d",tam);
    
    for(int i=0; i<3    ; i++){
        printf( " %s\n", vec[i]);
    }
}


void liberar_memoria(char **vec){
    //free(vec);
}