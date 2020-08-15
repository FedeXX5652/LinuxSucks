#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int reemplazo(char *, char *, char );

int main (void)
{

    char * str1, *str2;
    char    c,nombre[30];
    int     valido,i;
    
    
    printf("ingrese el nombre\n");
    fgets(nombre,30,stdin);     // ojo que toma todo y luego le pone el null y ahi esta en \n
    valido=strlen(nombre);      // cuenta el salto de linea ojo !!
    printf("cantidad=%d\n",valido);
    printf("\n");

    for (i=0;nombre[i]!='\0';i++){
        printf("cantidad=%c\n",nombre[i]);
    }  
    printf("\n");
    
    for (i=0;nombre[i]!='\0';i++){ // lo uso para buscar el valor de i donde está el null
    }  
    
    nombre[i-1]='\0';   // elimino el salto de linea que escribió en nombre corriendo el null

    for (i=0;nombre[i]!='\0';i++){
        printf("cantidad=%c\n",nombre[i]);
    }  
   
   str1= (char * )  malloc ( (valido) * sizeof(char)  ); // no sumo 1 porque fgets conto uno de mas
    str2= (char * )  malloc ( (valido) * sizeof(char)  );

    strcpy(str1,nombre);    // copia el nombre sin el salto de linea que ya lo eliminamos antes
    
    printf("str1: %s  \n",str1);
    
    c=getc(stdin);
     
    printf("c=%c\n",c);
    valido=reemplazo (str1,str2,c);    

    if(valido == 0)
    {
        printf("no hay cambios\n");
        printf("str1: %s  y str2: %s\n",str1,str2);
    }else{
        printf("hay cambios\n");
        printf("str1: %s  y str2: %s\n",str1,str2);
    }
    free(str1);
    free(str2);
    
    return 0;
}


int reemplazo(char *str1,char *str2, char car)
{
    int r=0,i;
    
    for(i=0;*(str1+i) != '\0';i++)
    {
        if(*(str1+i)>='a' && *(str1+i)<='z')
        {
            *(str2+i)=*(str1+i)-' ';
        }else{
            *(str2+i)=*(str1+i);
        }
    }
    if(car>='a' && car <='z')
    {
        car= car-' ';
    }
    for(i=0; *(str1+i) != '\0';i++)
    {
        if(*(str2+i) == car)
        {
            *(str2+i)='X';
            r=1;
        }else{
            *(str2+i)=*(str1+i);
        }
    }
    return r;
}
