#include "27.h"

int limon (char *s){

    int lenght = strlen (s);
    int puntos = 0;
    int numero = 0;
    
    int determinante = 0;

    for (int i = 0; i<lenght; i++){
        
        if (s[i] == '.')
        {
            puntos++;
                if (puntos == 3)
                {
                    
                    determinante = 1;
                }
        }

        else if (s[i] == '@')
        {
            
            determinante = 2;
            break;
        }
        
        else if (s[i] <= 57 && s[i] >= 48){
           numero++;
           if (numero == 16)
           {
               determinante = 3;
           }
        }
    }

    return determinante;
}

bool validate_string (char *s, int determinante){

    int comparador = 0;
    bool flag;
    comparador = limon(s);

    if (comparador == determinante)
    {
        flag = true;        
    }

    else
    {
        flag = false;
    }

    return flag;
}