/*
    Ejercicio 2.37.
    Leer 30 números desde teclado, y determinar e informar por pantalla:
    a) el promedio de cada uno de los 5 grupos de 6 valores consecutivos
    b) el promedio total.



Los include incluyen los protocolos de la función
*/

#include <stdio.h>

int main(void){

    float n1, n2, n3, n4, n5, n6;
    //float res = 0;

    float prom1;
    float prom = 0;
    float promf = 0;
    int i;

   for (i=0;i<5;i++){
    
    printf("Nro. 1=");
    scanf("%f", &n1);

    printf("Nro. 2=");
    scanf("%f", &n2);

    printf("Nro. 3=");
    scanf("%f", &n3);

    printf("Nro. 4=");
    scanf("%f", &n4);

    printf("Nro. 5=");
    scanf("%f", &n5);

    printf("Nro. 6=");
    scanf("%f", &n6);
    
    prom1 = (n1 + n2 + n3 + n4 + n5 + n6)/6;
    printf("promedio del grupo: %f\n", prom1);
    
    prom = prom + prom1;
    }

    promf = prom/5;

    printf("Promedio de promedios: %f\n", promf);

    return 0;
}