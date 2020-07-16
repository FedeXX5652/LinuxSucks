#include "link.h"

void func(char **proh, char **argv, int cant, int argc){

    int i=0;
    int j=0;
    int r=0;
    int caracX = 0;
    char *p;
    int coincidencias = 0;

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
        for (int y = 1; y < argc; y++)
        {
            strcat(argv[y], "\0");
            printf("arg: %ld\n", strlen(argv[y]));
            printf("proh: %ld\n",strlen(proh[w]));
            
            if (strcmp(argv[y], proh[w])==0)
            {
                printf("entre\n");
                coincidencias++;
            }
        } 
       
    }

    printf("Coincidencias: %d\n", coincidencias);
    
    printf("--------------------------------------------------------\n\n");
    
    i=0;
    do{

        printf("PALABRA CAMBIADAS: %s\n", *(argv+i+1));
        printf("\n");
        i++;

    }
    while(*(argv+i+1) != NULL);

    printf("Caracteres cambiados: %d\n", caracX);

}