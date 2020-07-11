#include "link.h"

int main()
{
    char *vector[4] = {"hola", "que", "hace", NULL};

  /*  for (int i = 0; i<3; i++)
    {
        printf("Palabra del vector en la posición %d es %s\n", i, vector[i]);
    }
*/

    imprimir_palabras(vector);

    return 0;
}