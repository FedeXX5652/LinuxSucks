#include <stdio.h>
#include <string.h>

void left_trim (char *s) {

    int size_t;
    size_t = (int)(sizeof(s));
    char str_final [size_t];

    printf("Size: %d\n",size_t);
   

    for (int i = 0; i <size_t; i++ ){
        
            if (s[i] != ' '){
                printf("IN\n");
                str_final[i] = s[i];
            }
    }
    
    printf("String en funcion:%s\n", str_final);
}