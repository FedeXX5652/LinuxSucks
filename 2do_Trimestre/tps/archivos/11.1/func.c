#include "link.h"

void func( char *str, char *palabra){

  
    int contador = 0;
    printf("Nombre del archivo a abrir: %s\n", str);
    FILE *file = fopen(str, "r");
    int tamFile = 0;
    int x;
    
   
    
    while (( x = fgetc(file)) != EOF ) {
            tamFile = tamFile + 1;
    }
    fclose( file );
    FILE *file = fopen(str, "r");
   

    
    char texto[60];
    printf("tamfile: %d\n",tamFile);

    if( fgets (texto, 60, file)!=NULL ) {
      printf("%s\n",texto);
    }


    

    /*while (( x = fgetc(file)) != EOF ) {
        c[0] = (char)x;
        strcat(texto, c);
    }*/

    
    int TAM = strlen(texto);
    printf("TAM: %d\n",TAM);

    
    for(int i = 0; i < TAM ; i++)
    {
        if(texto[i] == ' ' && texto[i+1] != ' ')
        {
            contador ++;
        }
    }
    
    

    fclose( file );
    printf("\n");
}
    