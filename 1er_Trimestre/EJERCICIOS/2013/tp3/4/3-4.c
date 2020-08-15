/*Escribir una función que simule una mano de truco para la cantidad de jugadores
indicada en su argumento (2, 3, 4 ó 6 jugadores). Sólo se pide repartir las
cartas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gencard.h"
#include "carta1.h"

int main(){

    int players;
    int LARGO = 18;
    int cartas[LARGO];
    int load = 0;
    
    

    for (int i = 0; i < LARGO; i++)
    {
        cartas[i]=0;
    }

    printf("Elija la cantidad de jugadores\n");
    scanf("%d", &players);
    LARGO = players * 3;
    

//--------------------------VALIDADOR------------------------
    int val = 1;
    int contador = 0;
    

    while (contador < LARGO){

        val = gencard(cartas,LARGO);

        if (val != 0)
        {
        
            cartas[contador]=val;
            contador = contador + 1;

            load = (contador * 100) / LARGO;

            printf("CARGANDO----%d%%\n", load);
        
        }
 
    }
//------------------------------------------------------------

carta1 (cartas, LARGO);

return 0;
}