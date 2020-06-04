/*Escribir una función que permita validar fechas recibidas como parámetro desde
el programa invocante, mediante un puntero a caracter. Se consideran fechas
aquellas comprendidas entre 01/01/1900 y 31/12/2100.
*/

#include <stdio.h>

int comprobar (char *fecha);

int main (void) 
{

    char fecha[10];
	
    printf("Ingrese la fecha con / entre valores: ");
	scanf("%s", fecha);
	 
	
    if (comprobar(fecha) == 1)
    {
        printf("La fecha es valida \n");    
    }
    else
    {
        printf("La fecha no es valida \n");
    }
    
    return 0;
}

int comprobar (char *fecha)
{
    int i;

    for (i = 0; fecha[i] != '\0'; i++) 
    {
        if (i > 9)
        {
            return 0;   
        }
        
        else if(i==2 || i==5)
		{
			if(fecha[i] != 47)
			{
				return 0;
			}
		}

       else if(i==0)
		{
			if(fecha[i] < 48 || fecha[i] > 51)
			{
				return 0;
			}
		}

        else if(i==1)
		{
			if(fecha[0] == 51 && fecha[i] > 49)
			{
				return 0;
			}
		}

         else if(i==3)
		{
			if(fecha[0] < 48 || fecha[i] > 49)
			{
				return 0;
			}
        }

        else if(i==4)
		{
			if(fecha[3] == 49 && fecha[i] > 50)
			{
				return 0;
			}
		}
        
        else if(i==6)
		{
			if(fecha[i] < 48 && fecha[i] > 50)
			{
				return 0;
			}
		}
        
        else if(i==7)
		{
			if(fecha[6] == 49 && (fecha[i] < 48 || fecha[i] > 57))
			{
				return 0;
			}

            else if(fecha[6] == 50 && (fecha[i] < 48 || fecha[i] > 49))
            {
                return 0;
            } 
		}
        
        else if(i==8)
		{
			if(fecha[7] == 49 && fecha[i] != 48)
			{
				return 0;
			}
		}

        else if(i==9)
		{
			if(fecha[7] == 49 && fecha[i] != 48)
			{
				return 0;
			}
		}
               
    }

    return 1;

}