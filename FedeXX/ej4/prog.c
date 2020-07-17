/*Realizar un programa que por medio de un menú permita cargar todos los coeficientes juntos:
a) recta y=mx+b
b) ecuación cuadrática y= ax2 +bx+c
c) Salir
E imprima en pantalla los valores obtenidos en el rango elegido.
Cada función solicitara el ingreso de los valores:
a) en el caso de la recta pendiente y ordenada al origen
b) en el caso de la ecuación cuadrática los valores de a b y c
Para ambos casos el rango de valores también debe ser pedido para ser ingresado por el usuario igual que
la cantidad de puntos a evaluar en el entorno ingresado.*/

#include "link.h"

int main(void){

    char abc;
    int salir = 0;

    do{
        printf("Ingrese lo que desea ejecutar:\n");
        printf("A: Recta\nB: Ec. Cuadratica\nC: Salir\n");
        scanf(" %c", &abc);
        printf("Eligió %c\n", abc);

        if (abc<=99 && abc>=97){
            abc = abc - 32;
        }

        switch(abc) {
        case 'A'  :
            funcA();
            break; 
	
        case 'B'  :
            funcB();
            break; 

        case 'C'  :
            salir=1;
            break;
        }
    }
    while(salir == 0);
    
    printf("Gracias por participar del proyecto UMBRELLA.INC\n");

    return 0;
}