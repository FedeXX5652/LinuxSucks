#include "link.h"

void chgcase(char *in, char *out, bool uplow){

    

    int n=0;
    int size=1;
    FILE *fp1;
    FILE *fp2;
    
    fp1 = fopen(in,"r");
    int c;
    char* inputFile;
    inputFile = (char*) malloc(size);
    
    if(fp1==0){
        fprintf(stderr, "Cannot open file!\n");
    }

    else{
    do{
        c = fgetc(fp1);
        inputFile = (char*) realloc(inputFile, size+1);
        inputFile[n]=c;
        n++;
        size++;
    }while(c!=EOF);}

    int len = strlen(inputFile);
    

    if (uplow == false)
    {
        for (int i = 0; i < len+1; i++)
    {
        if(inputFile[i]>='a' && inputFile[i]<='z')
        {
            inputFile[i] = inputFile[i] - 32;
        }
    }
    }

    if (uplow == true)
    {
        for (int i = 0; i < len+1; i++)
    {
        if(inputFile[i]>='A' && inputFile[i]<='Z')
        {
            inputFile[i] = inputFile[i] + 32;
        }
    }
    }


    
    fclose(fp1);

    fp2 = fopen(out, "w");
     
    if(fp2 == NULL)
    {
        printf("Unable to create file.\n");
    }

    fputs(inputFile, fp2);
    fclose(fp2);

    printf("Conversion finalizada\n");

    
}