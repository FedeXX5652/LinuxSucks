/*Escribir una función que reciba como argumento puntero a char, la asuma como
una secuencia e2n ASCII terminada en '\0' (NULL) y devuelva la secuencia invertida.
void string_reverse (char *) ;*/



#include "lib.h"

int main() 
{ 
  
    // Get the string 
    char str[100];


    printf("Enter a string:\n");
	scanf("%s", str);
  
    // Reverse the string 
    reverseString(str); 
  
    // Print the result 
    printf("Reverse of the string: %s\n", str);
  
    return 0; 
} 

