#include <stdio.h>
#include <math.h>
#include "calculo.h"
#include <string.h>
#include "conv.h"
#include <ctype.h>

//long int binarioADecimal(char *cadenaBinaria, int longitud);

int main() {

    char base;
    long int a;
    long int b;

    char a1[] = "";
    char b1[] = "";
    char op;
    float result = 0;

    printf(" Seleccione la base numerica con solo la primera letra: \n");
    scanf("%c", &base);
    base = tolower(base);

    if (base == 'd'){ 

        printf("La base es: Decimal\n");

        printf("Ingrese el primer valor: ");
        scanf("%ld", &a);
        printf("A= %ld\n", a);

        printf("Ingrese el segundo valor: ");
        scanf("%ld", &b);
        printf("B= %ld\n", b);

        printf("Ingrese el calculo a realizar: ");
        scanf("%s", &op);
        
        result = operator(a, b, op);

        printf("Resultado de la ´%c´ = %f\n", op, result);
    }

//------------------------------------------------------------------

   else if (base == 'o'){

        printf("La base es: Octal\n");

        printf("Ingrese el primer valor: ");
        scanf("%s", a1);
        printf("A= %s\n", a1);

        a = oct_dec (a1);

        printf("Ingrese el segundo valor: ");
        scanf("%s", b1);
        printf("B= %s\n", b1);

        b = oct_dec (b1);

        printf("Ingrese el calculo a realizar: ");
        scanf("%s", &op);

        result = operator(a, b, op);

        printf("Resultado de la ´%c´ = %f\n",op ,result);
    }

//------------------------------------------------------------------

    else if (base == 'h'){
        printf("La base es: Hexadecimal\n");
        
        printf("Ingrese el primer valor: ");
        scanf("%s", a1);
        printf("A= %s\n", a1);
        a = hex_dec (a1);

        printf("Ingrese el segundo valor: ");
        scanf("%s", b1);
        printf("B= %s\n", b1);
        b = hex_dec (b1);

        printf("Ingrese el calculo a realizar: ");
        scanf("%s", &op);

        result = operator(a, b, op);

        printf("Resultado de la ´%c´ = %f\n",op ,result);

    }
//------------------------------------------------------------------
    else if (base == 'b'){
        printf("La base es: Binario\n");

        printf("Ingrese el primer valor: ");
        scanf("%s", a1);
        printf("A= %s\n", a1);
        a = bin_dec (a1);

        printf("Ingrese el segundo valor: ");
        scanf("%s", b1);
        printf("B= %s\n", b1);
        b = bin_dec (b1);

        printf("Ingrese el calculo a realizar: ");
        scanf("%s", &op);

        result = operator(a, b, op);

        printf("Resultado de la ´%c´ = %f\n",op ,result);
    }
//------------------------------------------------------------------
    else {
        printf("No coincide con ninguna base numerica\n");
    }

    return 0;
}