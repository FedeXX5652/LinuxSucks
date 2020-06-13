/*Escribir una función que dados dos punteros a caracteres y un número "n" entero
recibidos como parámetros, compare lexicográficamente los primeros "n"
caracteres a partir de cada puntero, devolviendo un valor positivo, cero o
negativo, según corresponda. (Función strncmp() de la biblioteca <string.h>).
El prototipo de la función pedida es:
int my_strncmp (const char *s1, const char *s2, int n) ;*/

#include <string.h>
#include <stdio.h>

int my_strcmp (const char *, const char *) ;

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

int my_strcmp (const char *t, const char *s){

int p;
p = strcmp(t, s);

return p;
}