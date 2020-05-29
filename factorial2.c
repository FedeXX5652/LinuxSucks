#include <stdio.h>

int  main(void)
{
int factorial = 1,contador =1,i;    
float   numeroEuler=0,numeroEulerOld=-1;

for(i=0;(numeroEuler-numeroEulerOld)> 0.000000001;i++)
    {
        numeroEulerOld=numeroEuler;
        while(contador <= i)
        { 
            factorial = factorial * contador;
            contador++;
        }
        numeroEuler = numeroEuler + (1/(float)factorial); 
        printf("El numero e es %0.10f \n",numeroEuler);
        
        factorial = 1;
        contador =1;
    }
    return 0;
}