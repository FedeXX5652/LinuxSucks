/*
    Ejercicio 2.34.
    Escribir un programa que, dado un número N entero y positivo, calcule el
    factorial de N.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
   
    signed long int Resultado=0;
    signed long int Factorial;

   
    printf("Introduzca No. para calcular el factorial ...: ");
    scanf(" %ld", &Factorial);


    Resultado = 1;
    while(Factorial > 1) {
       Resultado *= Factorial;
       printf(" %ld x",Factorial);
       Factorial--;
    }
    
    if (Factorial <= 0){
        printf("No se puede realizar la operación\n");
    }
    
    else{
         printf(" 1 = %ld\n\n",Resultado);
    }
   


  return 0;
}