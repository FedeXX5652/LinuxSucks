#include <stdio.h>

double fact(long int x) 
{                      

    double result;

    result = 1;

    while(x > 1) {
       result *= x;
        printf(" %ld x",x);
       x--;
    }
    return result;
}
