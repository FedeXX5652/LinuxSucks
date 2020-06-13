/*Escribir una función que reciba un puntero a caracter "s" y un puntero a caracter
"t", y copie la “s” en “t”, terminando la cadena con el caracter '\0' (Función
strcpy () de la biblioteca <string.h>). El prototipo de la función pedida es:
void my_strcpy (char *t, const char *s);*/

#include <stdio.h>
#include <string.h>

void my_strcpy (char *, const char *);

int main(void){
    
    char t[5];
    const char s[5] = "INFO1";

    /*printf("Escriba su username de mail:");
    scanf("%s", t);
    printf("Su nombre de usuario es: %s\n", t);*/

    my_strcpy (t, s);

    return 0;
}

void my_strcpy (char *t, const char *s){

    strcpy (t, s);
    strcat(t, '\0');

    printf ("RESULTADO: %s\n", t);

}