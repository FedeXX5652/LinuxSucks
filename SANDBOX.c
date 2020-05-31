#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

bool comparaStr (char *,char *);

int main (void){
	char OS[30];
	char windows[] = "WINDOWS";
    char ch;
    bool res;
    int j = 0;

    printf("Elija su OS: ");
    scanf("%s", OS);

    while (OS[j]) { 
        ch = OS[j]; 
        OS[j] = toupper(ch); 
        j++; 
    } 

    res = comparaStr (OS, windows);

    if (res == false){
        printf ("Tu OS determinado (%s) es una verga\n", OS);
    }

    else{
        printf ("Tu OS determinado (%s) se la re banca\n", OS);
    }

    return 0;
}


bool comparaStr (char entrada[],char modelo[])
{
int ind = 0;

while (entrada[ind]!='\0' && modelo[ind]!='\0' && entrada[ind] == modelo[ind]) ind++;

if (entrada[ind]!='\0' || modelo[ind]!='\0')
   return false;

return true;
}