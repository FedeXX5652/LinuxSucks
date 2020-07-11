#include "link.h"

void func(char* palabra){

    int repeticiones[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    char letras[]= {'a', 'b', 'c', 'd', 'e','f','g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    for(int i = 0; palabra[i]; i++){
        palabra[i] = tolower(palabra[i]);
    }
    
    for(int i = 0; i < strlen(palabra); i++){

        for(int j = 0; j < sizeof(letras); j++){


            if (palabra[i] == letras[j]){

            repeticiones[j] = repeticiones[j] + 1;

            }
        }
    }

    for(int w = 0; w<sizeof(letras); w++){
        printf("%c: %d veces\n", letras[w], repeticiones[w]);
    }
}