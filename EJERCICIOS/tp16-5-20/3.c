/* Grupo 3
Escribir un programa tal que ingresados los coeficientes a, b y c de una ecuación cuadrática,
informe sus raíces, en caso de que las mismas sean imaginarias presentarlo adecuadamente.
Verifique que los coeficientes ingresados corresponden a una función cuadrática. (el coeficiente A debe ser distinto de cero).
Verifique el funcionamiento con los siguientes casos

a| b| c | stdout(pantalla)
-|--|---|-------------------------------------
0| 0| 0 | No es una ecuacion de segundo grado
0| 1| 1 | No es una ecuacion de segundo grado
1| 2| -8| r0=2.00;r1=-4.00
1| 2| 1 | r0=-1.00;r1=-1.00
1| 1| 1 | r0=-0.50+0.86j;r1=-0.50-j0.86
1| 0| 4 | r0=-0.00+2.00j;r1=0.00-j2.00


Imprimir nros complejos:
printf("r0= %f j %+f;r1= %f j %-f\n",r0Real , r0Imag , r1Real , r1Imag );
*/

#include <stdio.h>
#include <math.h>
#include "3num.h"

int main(void){

    float a, b, c;
    
    printf("Valor de A:\n");
    scanf("%f", &a);     //lee el valor de A

    printf("Valor de B:\n");
    scanf("%f", &b);     //lee el valor de B
    
    printf("Valor de C:\n");
    scanf("%f", &c);    //lee el valor de C

    num(a, b, c);

    return 0;
}