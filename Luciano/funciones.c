#include "mylib.h"
void numerizar (char *str) {



int repeticiones [cant_letras];

for(int i = 0; i < cant_letras; i++){
    repeticiones[i] = 0;
}

char letras [cant_letras] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
int tam = 0;


tam = strlen(str);
printf("Tamaño %d\n",tam);

for(int i = 0; str[i]; i++){
  str[i] = tolower(str[i]);
}

for(int i = 0; i < tam; i++){

    for(int j = 0; j < cant_letras; j++){


        if (str[i] == letras[j]){

            repeticiones[j] = repeticiones[j] + 1;

        }


  
    }
}

 printf("Letra - Repeticiones\n");

 for(int i = 0; i < cant_letras; i++){

    

    printf("%c - %d\n",letras[i],repeticiones[i]);
 
 }


}