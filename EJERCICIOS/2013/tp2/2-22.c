/*
    Ejercicio 2.22.
    Elabore un programa donde ingresan dos valores reales y el símbolo de la
    operación (‘+’, ‘-’, ‘*’, ‘/’). Se deberá presentar por pantalla, los datos
    ingresados, la operación y el resultado. Si el símbolo utilizado no correspondiera
    a ninguna de las cuatro operaciones deberá presentar un mensaje de
    “Operación NO Válida”. (El programa deberá resolverse mediante el uso de la estructura switch).
*/

#include <stdio.h>
#include <string.h>

int main(void){

    float nro1;
    float nro2;
    float res = 0;
    int operacion;

    printf("Introduzca primer No. para calcular ...: ");
    scanf(" %f", &nro1);

    printf("Introduzca segundo No. para calcular ...: ");
    scanf(" %f", &nro2);
    
    printf("Introduzca el número de la operación a realizar ...: ");
    printf("1) +\n");
    printf("2) -\n");
    printf("3) /\n");
    printf("4) *\n");
    scanf(" %d", &operacion);


    switch (operacion) {

        case 1:
            res = nro1 + nro2;
            printf("\n   La suma es: %f \n", res);
        break;

        case 2:
            res = nro1 - nro2;
            printf("\n   La resta es: %f \n", res);
        break;

        case 3:
            res = nro1 / nro2;
            printf("\n   La división es: %f \n", res);
        break;

        case 4:
            res = nro1 * nro2;
            printf("\n   La multiplicación es: %f \n", res);
        break;

        default:
            printf("No se ha ingresado una operación valida\n");

    }

    return 0;
}