#include <stdio.h>

int main(){

float nro1;
float nro2;
float suma;
float resta;
float prod;
float div;

printf("Introduzca primer No. para calcular ...: ");
scanf(" %f", &nro1);

printf("Introduzca segundo No. para calcular ...: ");
scanf(" %f", &nro2);

suma = nro1 + nro2;
resta = nro1 - nro2;
prod = nro1 * nro2;

printf( "\n   La suma es: %f", suma );
printf( "\n   La resta es: %f", resta );
printf( "\n   El producto es: %f", prod );

if (nro2 != 0){
div = nro1 / nro2;
printf( "\n   La division es: %f \n", div );
}

else{
printf( "\n La division no es posible \n");
}
}