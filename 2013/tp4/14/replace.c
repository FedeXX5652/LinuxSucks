#include <stdio.h> 
#include <string.h>

void replace (char *s, char nuevo, char viejo){

    
    int length = strlen(s);

    for (int i = 0; i < length; i++){
        if (s[i] == viejo){
            s[i] = nuevo;
        }
    }

    printf("El nuevo string es: %s\n", s);

}