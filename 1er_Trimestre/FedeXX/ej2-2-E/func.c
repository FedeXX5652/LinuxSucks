#include "link.h"

void func(int argc, char **argv){
    char *p;
    int cont_linea = 1;
    int cont_char = 0;
    int cont_palabras = argc-1;

    for (int j=1 ; j<argc ; j++ )
    {
        p = *(argv+j);

        for (int i=0 ; *( p+i ) != '\0' ; i++ )
        {
            printf("%c" , *( p+i ) );

            if ((*( p+i )) == '/' && (*(p+i+1) == 'n')){
                cont_linea ++;
                cont_char = cont_char - 2;
                cont_palabras --;
            }

            if ((*( p+i )) != '\t' || (*(p+i) != ' ')){
                cont_char ++;
            }

            if ((*( p+i )) == '\t' ){
                cont_palabras ++;
            }

            
        }
        printf(" ");
    }
    printf("\n");
    printf("cont_linea= %d\n", cont_linea);
    printf("cont_char= %d\n", cont_char);
    printf("cont_palabras= %d\n", cont_palabras);
}