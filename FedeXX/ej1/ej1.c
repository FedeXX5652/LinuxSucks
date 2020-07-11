#include "link.h"

int main (int argc , char ** argv )
{
    //int valido;
    mayus(argc);

    return 0;
}



/*
    if (argc == 2)
    {
        mayus(argv);
        valido = validar_correo (argv);
        if ( valido == 0 )
        {
            valido = imprimirNombre ();
            if ( valido !=0)
            {
                printf ("error asignando memoria\n");
            }

            valido = imprimirDominio ();
            if ( valido !=0)
            {
                printf ("error asignando memoria\n");
            }
        }
        
        else
        {
            printf (" %s NO es un mail \n", (argv) );
        }
    }
    
    else
    {
        printf ("escriba un solo argumento que sea un mail\n");
    }
*/