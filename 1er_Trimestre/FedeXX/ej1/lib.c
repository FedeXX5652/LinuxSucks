#include "link.h"

void mayus(char *mail){
    for(int i; i<strlen(mail);i++){
        if(mail[i]>='a' || mail[i]<='z'){
            mail[i]=mail[i]-32;
        }
    }
    printf("%s\n", mail);
}

/*int validar_correo (char *mail){
    
}

int imprimirNombre (char *nombre){

}

int imprimirDominio (char *domio){

}

*/