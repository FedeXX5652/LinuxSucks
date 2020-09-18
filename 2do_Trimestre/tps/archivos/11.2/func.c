#include "link.h"

void file(char *text){
    
    FILE * filep;

    filep = fopen("DIO.txt", "w");

    if(filep == NULL)
    {
        printf("Unable to create file.\n");
    }

    fputs(text, filep);
    fclose(filep);

    printf("File created and saved successfully. :) \n");
    
}