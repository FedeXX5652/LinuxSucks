#include "link.h"

char **extraer_palabras(char *str){

    char *p;
    int palabras = 1;
    char delim[2] = " ";
    int w=1;
    
    for(int i=0; i<strlen(str); i++){
        if(str[i]==' '){
            palabras++;
        }
    }

    char *p2[palabras];

    printf("Palabras-func1: %d\n", palabras);

    p = strtok(str, delim);
    p2[0] = (char *)malloc((strlen(p)+1)*sizeof(char));
    
    if(p2 == NULL){
            printf("NO TENES RAM, ALTO BOBO\n");
    }

    strcpy(p2[0], p);

    while( p != NULL ){
        
        p = strtok(NULL, delim);
        p2[w] = (char *) realloc(*p2, (strlen(p)+1)*sizeof(char));

        if(p2 == NULL){
            printf("NO TENES RAM, ALTO BOBO\n");
        }
        
        strcpy(p2[w], p);
        
        w++;
       
        
        
    } 

    for(int i=0; i<3    ; i++){
        printf( " %s\n", p2[i]);
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