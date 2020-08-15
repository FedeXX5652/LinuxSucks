#include "validar.h"
int prod_escalar (char *str){

    int size = strlen(str);
    char valor1[20] = "";
    int cont = 0;
    int a = 0;
    

    for ( int i=1 ; i<size-1 ; i++ )
    {
       if ((str[i] == ' '  || str[i] == ',') && cont == 0){

           cont = cont+1;
       }

        if ((str[i] != ' ' || str[i] != ',') && cont == 0){

            valor1[i] = str[i];
            
            

        }

         printf("%s\n",valor1);


    }

    

    return a;



}