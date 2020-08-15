/* asignar memoria dinamicamente al vector que contiene las adr de los nombres ingresados y utilizar la memoria justa para cada nombre 
( la idea es que si generé un vector de 256 elementos pero ingreso un nombre que ocupa 5, usemos los recursos para que sólo se usen
 los espacios para esos 5 y que no genére 256 espacios siempre por mas que no los usemos). Temina el programa cuando un nombre
  comienza con el simbolo @ */

/* probar usando ./main < entrada.txt > salida.txt
 es una manera de redirigir la entrada y que no sea por stdin sino por los datos que contiene el archivo //
   entrada y luego usar el comando > que indica que la salida cambia de stdout (consola) al archivo salida.txt . 
   luego podemos analizar al archivo para no andar recorriendo la consola
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 256

int main (void)
{
    int i=0,j;
    char    c,nombres[TAM];
    char * p;
    char ** adr;
    
    adr= (char **) malloc(sizeof(char *));  //inicializo "adr" en el espacio reservado
    
    do{
//        printf("ingrese nombre :");
        fgets(nombres , TAM , stdin );  //        scanf("%s",nombres);
        j = strlen(nombres);
        p = (char *) malloc (j*sizeof(char));
        strcpy ( p , nombres);
        *(adr + i) = p;
        printf("nombre:%s \radd de p:\t\t\t\t%p\nadd del vector de adr:\t\t\t%p\n",*(adr+i),*(adr+i), adr);
        printf("nombre:%c \r\n",*(*(adr+i)));   // acceso a un caracter
        // amplio el espacio  y notar que sumo 2 porque ya hay un espacio y la variable i comienza desde cero
        adr = (char **) realloc( adr ,(i+2)* sizeof(char *)); 
        c = *(*(adr+i));
        i++;
    }while( c != '@' );
    *(adr + i) = NULL;      // marco con NULL al ultimo elemento del vector que contiene direcciones

    for(i=0 ; *(adr+i) != NULL ;i++){
    printf("\rnombre%d :%s \t ",i, *(adr+i) );
    }

    for(i=0 ; *(adr+i) != NULL ;i++){
    printf("\radr_free%d :\t\t\t\t%p  \n",i, *(adr+i) );
    free(*(adr+i) );
    }
    printf("\radr_free%d :\t\t\t\t%p  \n",i, *(adr+i) );
    free(*(adr+i) );
    printf("adr_free:\t\t\t\t%p  \n",adr);
    free (adr);
    return 0;
}
