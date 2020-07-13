#include "link.h"

int ObtenerMayores(int *vec, int tam, int umb){

    int supera3 = 0;

    for(int i=0; i<tam; i++){

        if (vec[i] > umb)
        {
            supera3++;
        }
    }
    return supera3;
}