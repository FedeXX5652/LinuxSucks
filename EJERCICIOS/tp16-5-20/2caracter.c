#include <stdio.h>

char caracter(char string[0]){

    char p;

    if (97 <= string[0] && string[0] <= 122){
        p = "Es una letra minuscula \n";
    }

    else if (65 <= string[0] && string[0] <= 90){
        p = "Es una letra mayuscula \n";
    }

    else if (48 <= string[0] && string[0] <= 57){
       p = "Es un número \n";
    }

    else {
       p = "Es otro caracter \n";
    }
    return p;
}