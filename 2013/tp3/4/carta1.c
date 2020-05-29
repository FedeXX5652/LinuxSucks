#include <stdio.h>

void carta1 (int cartas[], int LARGO){
    int ncarta;

    for (int i = 0; i < LARGO; i++)
    {
        if (cartas[i]>=1 && cartas[i]<=12){
            ncarta = cartas[i];
            printf("%d de espada\n",ncarta);
        }
        else if (cartas[i]>=13 && cartas[i]<=24){
            ncarta = cartas[i] - 12;
            printf("%d de basto\n",ncarta);
        }
        else if (cartas[i]>=25 && cartas[i]<=36){
            ncarta = cartas[i] - 24;
            printf("%d de oro\n",ncarta);
        }
        else if (cartas[i]>=37 && cartas[i]<=48){
            ncarta = cartas[i] - 36;
            printf("%d de copa\n",ncarta);
        }
    }
}