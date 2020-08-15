#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int gencard (int cartas[], int LARGO){

    int num;
    
    srand(time(0));

    num =  rand()%48+1;
    

    for (int i = 0; i < LARGO; i++)
    {
        if (num == cartas[i])
        {
            // cambiar el num
            
            num = 0;
            break;
        }

    
    }

    return num; 
}