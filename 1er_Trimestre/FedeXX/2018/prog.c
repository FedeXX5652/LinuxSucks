#include "link.h"

int main(int argc, char *argv[]){

    float lim = 0;
    int *p;

    printf("Ingrese el N° limite:\n");
    scanf("%f", &lim);
    printf("Limite= %f\n", lim);

    printf("Valores del vector: \n");
    for (int i=1 ; i<argc ; i++ )
    {
        printf("%s \t" , argv[i] );
        p = atol(argv[i]);;
    }
    printf("\n");

    minmay(argv, argc, lim);

    return 0;
}