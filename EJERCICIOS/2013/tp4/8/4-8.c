/*Escribir una función que reciba dos punteros a char como argumentos, realice
una comparación lexicográfica de las secuencias de bytes finalizadas en '/0'
apuntadas por cada uno, y retorne valores positivos, cero y negativos, según
corresponda. (Función strcmp () de la biblioteca <string.h>).
El prototipo de la función pedida es:
int my_strcmp (const char *t, const char *s) ;*/

#include "lib.h"

int main()
{
char t[100],s[100];
int n;

printf("introduce la primera cadena: ");
scanf("%s", t);

printf("introduce la segunda cadena: ");
scanf("%s", s);

n = my_strcmp (t,s);

printf("%d\n",n);

return 0;
}
