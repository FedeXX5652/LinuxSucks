#include "link.h"

void contadores(int argc, char **argv){

    char *p;
    int carac[] = {0,0,0,0,0,0};
    int vocs[] =  {0,0,0,0,0,0};
    int cons[] =  {0,0,0,0,0,0};

    for (int i = 1; i < argc; i++){
        p = *(argv+i);

        for (int j=0 ; *( p+j ) != '\0' ; j++)
        {

            carac[i-1] = carac[i-1] + 1;
            
        if (isvowel(tolower(*( p+j )))){
            vocs[i-1] = vocs[i-1] + 1;
            }

        if (!(isvowel(tolower(*( p+j ))))){
            cons[i-1] = cons[i-1] + 1;
            }
        }
        
        
    }
    
    for(int w=1; w<argc; w++){
        printf("%s:\n" , *(argv+w));
        printf("Caracteres %d: %d\n", w, carac[w-1]);
        printf("Vocales %d: %d\n", w, vocs[w-1]);
        printf("Consonantes %d: %d\n", w, cons[w-1]);
        printf("\n");
    }
}

int isvowel(int ch)
{
  int c = toupper(ch);
 
  return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}