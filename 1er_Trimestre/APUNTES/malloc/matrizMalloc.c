#include<stdio.h>
#include <stdlib.h>

int main (void)
{

    int **matriz;
    int filas,columnas,i,j;
    
/********  DEFINO TAMAÑO DE LA MATRIZ *************/
    printf("ingrese cantidad de filas \n");
    scanf("%d",&filas);
    printf("ingrese cantidad de columnas \n");
    scanf("%d",&columnas);
    
/********  RESERVO ESPACIO PARA EL TAMAÑO DEFINIDO *************/
    matriz = (int **)malloc (filas*sizeof(int *));

    for (i=0 ; i<filas ; i++)
    {
        matriz[i] = (int *) malloc (columnas*sizeof(int));
    }

/********  INGRESO LOS DATOS EN LA MATRIZ *************/
    for (i=0 ; i<filas ; i++)
    {
        for (j=0 ; j<columnas ; j++)
        {
            printf("ingrese dato para fila %d  columnas %d \n",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    printf("\n");

/********  IMPRIMO LA MATRIZ GENERADA *************/
    for (i=0 ; i<filas ; i++)
    {
        for (j=0 ; j<columnas ; j++)
        {
            printf("%d \t",matriz[i][j]);
        }
        printf("\n");
    }
    
/********  LIBERO MEMORIA  *************/
    for (i=0 ; i<filas ; i++)
    {
        free(matriz[i]);
    }

    free(matriz);
    
    return (0);
}
        
    
    

