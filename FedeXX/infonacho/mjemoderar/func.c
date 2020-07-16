#include "link.h"

void func(char **proh, char **argv, int cant){

    int i=0;
    int j=0;
    int r=0;
    int caracX = 0;
    char *p;

    printf("cant = %d\n", cant);
    
    do{

        printf("PALABRA: %s\n", *(argv+i+1));
        printf("\n");
        i++;

    }
    while(*(argv+i+1) != NULL);
    
    printf("--------------------------------------------------------\n\n");
    
    for(j=0;j<=cant;j++){

        printf("PROHIBIDO: %s", *(proh+j));
        printf("\n");

    }

    printf("--------------------------------------------------------\n\n");

    for(int w=0;w<=cant;w++){

        while(*(argv+r+1) != NULL){

            p = *(argv+r+1);

            if (strcmp(proh[w],p) == 0){
                
                for(int i=0; i<strlen(p); i++){
                    //strcpy(*argv[r], 'X');
                    printf("funcion\n");
                    caracX++;
                }
                printf("funcion3\n");
            }
            r++;
            printf("funcion2\n");
        }
    }

    i=0;

    do{

        printf("PALABRA: %s\n", *(argv+i+1));
        printf("\n");
        i++;

    }
    while(*(argv+i+1) != NULL);

    printf("Caracteres cambiados: %d\n", caracX);

}