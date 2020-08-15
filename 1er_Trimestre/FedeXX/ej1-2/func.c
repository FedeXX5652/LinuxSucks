#include "link.h"

int rot_13 (char *entrada , char *codificada){
    
    int cambios = 0;
    
    
    for(int j=0; j<strlen(entrada); j++){
        
        if (entrada[j] != '\0'){

        if (entrada[j] >='a' && entrada[j] <='m')
        {
            codificada[j] = entrada[j]+13;
            cambios ++;
        }

        else if (entrada[j] >='n' && entrada[j] <='z')
        {
            codificada[j] = entrada[j]-13;
            cambios ++;
        }

        else if (entrada[j] >='A' && entrada[j] <='M')
        {
            codificada[j] = entrada[j]+13;
            cambios ++;
        }

        else if (entrada[j] >='N' && entrada[j] <='Z')
        {
            codificada[j] = entrada[j]-13;
            cambios ++;
        }

        else if(entrada[j] == ' '){
            codificada[j] = entrada[j];
        }
        else if(isalpha(entrada[j])==0){
            return -1;
        }

    }}

    printf("Char: %s\n", entrada);
    printf("Codificada: %s\n", codificada);
    
    return cambios;
}