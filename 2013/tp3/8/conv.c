#include <stdio.h>

void conv(int conversor, double temp1, double temp2, double temp3){
    
    if(conversor == 1){
        temp1 = (temp1 * (9/5)) + 32;
        temp2 = (temp2 * (9/5)) + 32;
        temp3 = (temp3 * (9/5)) + 32;

        conversor = 0;

        printf("Celcius a Fahrenheit: %lf°F - %lf°F - %lf°F\n", temp1, temp2, temp3);
    }

    else if(conversor == 0){
        temp1 = (temp1 - 32) * 0.56;
        temp2 = (temp2 - 32) * 0.56;
        temp3 = (temp3 - 32) * 0.56;
            

        printf("Fahrenheit a Celcius: %lf°C - %lf°C - %lf°C\n", temp1, temp2, temp3);
    }
}