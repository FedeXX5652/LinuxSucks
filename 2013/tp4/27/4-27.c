/*a)Escribir 3 funciones que, recibiendo una cadena de caracteres como
argumento, permitan determinar si la cadena es válida como dirección IP, como
dirección de correo electrónico, y como número de tarjeta de crédito.
b) Escribir una función denominada validate_string() que recibiendo una cadena
de caracteres y una función de validación (pasada por puntero), determine si la
cadena es válida conforme al criterio de validación indicado, retornando en
consecuencia true o false por su nombre.

IP: 196.162.1.0 --> 1
mail: hola@gmail.com --> 2
Tarjeta de credito: 1234567891234567 -->3
*/

#include "27.h"

int main (void){

    int size_ch = 40;
    char ch[size_ch];
    int ejercicio = 0;
    int validador = 0;
    

    printf("Ingrese una cadena a determinar: \n");
    fgets(ch, size_ch, stdin);
    printf("Su parametro ingresado es: %s\n",ch);

    printf("Ingrese el numero correspondiente al punto que desea ejecutar: \n");
    printf("\n Punto A (1)----Punto B (2) \n");
    scanf("%d", &ejercicio);
    printf("Ejecutando parte %d\n",ejercicio);

  
    
    if (ejercicio == 1){
        if(limon(ch) == 1){
            printf("La string ingresada es una direccion IP: %s\n", ch);
        }

        else if(limon(ch) == 2){
            printf("La string ingresada es un mail: %s\n", ch);
        }

        else if(limon(ch) == 3){
            printf("La string ingresada es una tarjeta de credito: %s\n", ch);
        }

        else{
            printf("La string ingresada no coincide con ningun validador\n");
        }        
    }
    
    else if (ejercicio == 2){

        printf("Ingrese el numero correspondiente al tipo de validador que desea utilizar: \n");
        printf("IP --> 1\nMail --> 2\nTarjeta de credito --> 3\n");
        scanf("%d", &validador);

       if (validate_string(ch, validador)== true) {
           printf("La string cumple con el validador ingresado\n");
       }
       else if(validate_string(ch, validador)== false) {
           printf("La string NO cumple con el validador ingresado \n");
       }

    }

    else{
        printf("ERROR 1      Ingrese un ejercicio valido\n");
    }
    return 0;
}