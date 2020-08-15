#include "validar.h"

int main (int argc, char *argv[]){

    
    int i=0;
    int validacion;
    char str[20] = "";
    

    for ( i=1 ; i<argc ; i++ )
    {
        strcat(str, argv[i] );
    }

    validacion = validar(str);

    if (validacion == 0){

        int resultado = prod_escalar(str);

        printf("%d\n",resultado);
    }


    


 


}