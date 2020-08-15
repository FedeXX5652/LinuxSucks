/*1. Realizar una funci´on que imprima por stdout un vector de palabras.
//Prototipo de la funci´on:
void imprimir_palabras(char **vec);
Par´ametros de entrada:
char **: Puntero a puntero a char, que apunta al primer elemento de un vector
de punteros a char. En el vector de punteros a char, cada elemento apunta a un
string que contiene una palabra. El ´ultimo elemento del vector ser´a el puntero nulo
(NULL), quedando de largo palabras+1.

2. Realizar una funci´on que extraiga las palabras de un texto.
//Prototipo de la funci´on:
char **extraer_palabras(char *str);
Parametros de entrada:
char *str: Puntero a char, que apunta al string a analizar.
Retorno:
char **: Puntero a puntero a char, que apunta al primer elemento de un vector
de punteros a char. En el vector de punteros a char, cada elemento apunta a un
string que contiene una palabra. El ´ultimo elemento del vector ser´a el puntero nulo
(NULL), quedando de largo palabras+1.
Las palabras podr´an contener letras may´usculas y min´usculas.
Utilizar memoria din´amica para la salida.

3. Realizar una funci´on que libere memoria.
//Prototipo de la funci´on:
void liberar_memoria(char **vec);
Parametros de entrada:
char **: Puntero a puntero a char, que apunta al primer elemento de un vector
de punteros a char que fue alojado dinamicamente. En el vector de punteros a
char, cada elemento apunta a un string que fue alocado dinamicamente. El ´ultimo
elemento del vector ser´a el puntero nulo (NULL), quedando de largo palabras+1.
*/

#include "link.h"

int main(void){

    char **ptr=NULL;
    char str[]={"Hola como va?"};

    printf("String original: ");
    puts(str);
    
    ptr=extraer_palabras(str);

    for(int i=0; i<3    ; i++){
        printf( " %s\n", ptr[i]);
    }

    printf("Palabras:\n");
    imprimir_palabras(ptr);

    //liberar_memoria(ptr);

    return(0);
}
