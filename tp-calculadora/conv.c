#include <math.h>
#include<string.h>
#include <ctype.h> 

long int hex_dec(char hexVal[]) 
{    
    int len = strlen(hexVal); 
    int base = 1; 
    long int dec_val = 0; 
   


    for (int i=0; i<len; i++)
    {
        hexVal[i] = toupper(hexVal[i]);
    }

    for (int i=len-1; i>=0; i--) 
    {    

        if (hexVal[i]>='0' && hexVal[i]<='9') 
        { 
            dec_val += (hexVal[i] - 48)*base; 
            base = base * 16; 
        } 

        else if (hexVal[i]>='A' && hexVal[i]<='F') 
        { 
            dec_val += (hexVal[i] - 55)*base; 
            base = base*16; 
        } 
    } 
      
    return dec_val; 
} 

long int oct_dec(char *cadenaOctal) {

  int longitud = strlen(cadenaOctal); 
  long int decimal = 0;
  int potencia = 0;
  for (int i = longitud - 1; i >= 0; i--) {
 
    int valorActual = cadenaOctal[i] - '0';
    long int elevado = pow(8, potencia) * valorActual;

    decimal += elevado;
    potencia++;
  }
  return decimal;
}

long int bin_dec(char *cadenaBinaria) {

  int longitud = strlen(cadenaBinaria);
  long int decimal = 0;
  int multiplicador = 1;
  char caracterActual;
  for (int i = longitud - 1; i >= 0; i--) {
    caracterActual = cadenaBinaria[i];
    if (caracterActual == '1') {
      decimal += multiplicador;
    }
    multiplicador = multiplicador * 2;
  }
  return decimal;
}




