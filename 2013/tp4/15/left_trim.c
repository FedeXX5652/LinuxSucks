#include <stdio.h>
#include <string.h>

void left_trim (char *s) {

    int size_t;
    size_t = sizeof(s)/sizeof(s[0]);
    char str_final [size_t];
   

    for (int i = 0; i <size_t; i++ ){
        if (s[i] != '\0'){
            if (s[i] != ' '){
                printf("IN\n");
                str_final[i] = s[i];
            }
            else{   
                s[i] = s[i+1];
                i--;
            }
        }
    }
    
    printf("String en funcion:%s\n", str_final);
}