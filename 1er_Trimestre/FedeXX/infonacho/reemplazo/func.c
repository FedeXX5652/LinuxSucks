#include "link.h"

int reemplazo(char *str1,char *str2, char car){

    int cont = 0;
    int flag = 0;

    for(int j=0;j<strlen(str1); j++){
        
        if(str1[j] != car){
            cont ++;
        }
    }
    
    if(cont != strlen(str1)){
        for(int i=0; i<strlen(str1); i++){

                if(str1[i] == car){
                    str1[i] = 'X';
                }
            }
        strcpy(str2, str1);
        printf("%s\n", str2);
        flag = 1;
    }


    if(cont >= strlen(str1)){
        flag = 0;
    }

    return flag;
}