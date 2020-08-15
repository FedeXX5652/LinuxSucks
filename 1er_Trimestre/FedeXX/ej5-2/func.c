#include "link.h"

unsigned char suma_saturada(unsigned char a, unsigned char b){

    unsigned char res;

    int aa = (int)a;
    int bb = (int)b;
    int c = 0;

    c = aa + bb;

    if (c > UCHAR_MAX){

        res = (unsigned char)UCHAR_MAX;

    }

    else
    {
        res = a + b;
    }
    
    

    return(res);

}