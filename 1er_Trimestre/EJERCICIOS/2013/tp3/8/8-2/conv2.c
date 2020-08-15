#include <stdio.h>
#include <math.h>

void conv2(int conversor, double temp1){
    
    if(conversor == 1){
        temp1 = (temp1 * (9/5)) + 32;

        conversor = 0;

        printf("Celcius a Fahrenheit: %lf°F\n", temp1);
    }

    else if(conversor == 0){
        temp1 = (temp1 - 32) * 0.56;
            

        printf("Fahrenheit a Celcius: %lf°C\n", temp1);
    }
}