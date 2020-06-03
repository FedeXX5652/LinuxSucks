#include <stdio.h>
#include <string.h>
#include "right_trim.h"

void right_trim (char *s) {

    int s_trim = 0;
    int s_trim2 = 0;
    int flag = 0;
    s_trim = strlen(s);

    char str_final [s_trim];
    
    char str_pass [1];


    s = str_rev(s);
   
    printf("S: %s\n", s);
    printf("Size: %d\n",(s_trim-1));
   
    for (int i = 1; i <s_trim; i++ ){
        
        if (s[i] != ' ' || flag==1){
            printf("IN\n");
            str_pass[0] = s[i];
            strcat(str_final, str_pass);
            flag = 1;
         }
    }

  
    
    str_final = str_rev(str_final); 
    
    printf("String en funcion:%s\n", str_final);
    s_trim2 = strlen(str_final);
    printf("Size: %d\n",(s_trim2-1));
}