/*Escribir una función que reciba como argumento puntero a char, la asuma como
una secuencia e2n ASCII terminada en '\0' (NULL) y devuelva la secuencia invertida.
void string_reverse (char *) ;*/

#include <stdio.h> 
#include <string.h> 

void reverseString(char*); 

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

void reverseString(char *str) 
{ 
    
    int l, i; 
    char *begin_ptr, *end_ptr, ch; 
  
    // Get the length of the string 
    l = strlen(str); 
  
    // Set the begin_ptr and end_ptr 
    // initially to start of string 
    begin_ptr = str; 
    end_ptr = str; 
    printf("%s\n",begin_ptr);

    // Move the end_ptr to the last character 
    for (i = 0; i < l - 1; i++){
	    end_ptr++; 
	} 
    
    // Swap the char from start and end 
    // index using begin_ptr and end_ptr 
    for (i = 0; i < l / 2; i++) { 
  
        // swap character 
        ch = *end_ptr; 
        *end_ptr = *begin_ptr; 
        *begin_ptr = ch; 
  
        // update pointers positions 
        begin_ptr++; 
        end_ptr--; 
    } 
} 

