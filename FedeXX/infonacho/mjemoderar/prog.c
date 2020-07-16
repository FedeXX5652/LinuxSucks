/*3) El programa recibe un “mensaje a moderar” por línea de comandos.
Ejemplo: $ nombre_programa Hola mundo!! ¿Que tal?, donde Hola Mundo!! ¿Que tal? es el mensaje a moderar.

Ni bien se carga en memoria, el programa ejecutará la siguiente secuencia de operaciones:

3.1. Requerirá al usuario el ingreso de hasta 10 palabras prohibidas por teclado.
El ingreso finaliza cuando una cadena se compone solo de '\0', es decir cuando el usuario pulsó solo ENTER,
o cuando se alcanza el valor máximo de 10 palabras. Así armará un arreglo de hasta 10 palabras prohibidas.

3.2. A continuación (es decir, una vez ingresada la lista completa de palabras prohibidas)
el programa buscará en el mensaje a moderar, cada una de las palabras que componen la black list,
y de encontrarla reemplazará cada uno de sus caracteres por una “X”.
Considerar que una palabra prohibida puede aparecer más de una vez en el mensaje a moderar.

3.3. Una vez completada esta tarea imprimirá por pantalla el “mensaje moderado”
y en la siguiente línea una leyenda que informe la cantidad de caracteres reemplazados por “X”*/

#include "link.h"

int main(int argc, char* argv[]){

    char *palabra[TAM];
    int cant = 0;
    
    char p[30];

    for (int i=0; i<TAM; i++){

        
        fgets(p, 30, stdin);
        palabra[i] = malloc((strlen(p)+1)*sizeof(char));
        
        strcpy(palabra[i],p);
        printf("%s",palabra[i]);

        if (*palabra[i] == '\n')
        {
            i = TAM;
            cant = i - 1;
        }
        

    }


    







    return 0;

}