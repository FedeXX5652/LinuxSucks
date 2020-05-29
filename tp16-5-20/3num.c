#include <stdio.h>
#include <math.h>

void num(float a, float b, float c){

float x1, x2, disc, r0Real, r0Imag, r1Real, r1Imag;

disc = pow(b, 2) - (4 * a * c);  //guarda discriminante

if (disc > 0){
    x1 = ((-b + sqrt(disc)) / (2 * a));
    x2 = ((-b - sqrt(disc)) / (2 * a));

    printf("X1 = %f  X2 = %f\n", x1, x2);
}


else if (disc == 0){
    x1 = x2 = (-b) / (2 * a);
    printf("X1 = X2 = %f\n", x1);
    }


else if (disc < 0){
        
    r0Real = -b / (2 * a);
    r1Real = -b / (2 * a);
    r0Imag = sqrt(disc * (-1)) / (2 * a);
    r1Imag = sqrt(disc * (-1)) / (2 * a);

    printf("r0= %f j %+f;r1= %f j %-f\n",r0Real , r0Imag , r1Real , r1Imag );
    
}
}