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

        p = *(proh+w);

        for (int o=0 ; *( p+o ) != '\0' ; o++ )
        {
            if(*(p+o) == '\n'){
                *(p+o) = 0;
            }
        }

        
        for (int y = 1; y < argc; y++)
        {
            strcat(argv[y], "\0");
            printf("arg: %ld\n", strlen(argv[y]));
            printf("proh: %ld\n",strlen(proh[w]));
            
            
            if (0 == (strcmp(argv[y], proh[w])))
            {
                p = *(argv+y);

                for (int o=0 ; *( p+o ) != '\0' ; o++ )
                {
                    *(p+o) = 'X';
                }
                coincidencias++;
            }
        } 
       
    }

    printf("Coincidencias: %d\n", coincidencias);
    
    printf("--------------------------------------------------------\n\n");
    
    i=0;
    printf("PALABRA CAMBIADAS: \n");
    
    do{
        printf("%s ", *(argv+i+1));
        i++;
    }
    while(*(argv+i+1) != NULL);
    printf("\n");
    printf("Caracteres cambiados: %d\n", caracX);

}