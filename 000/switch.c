#include <stdio.h>
int main(void)
{
    int case1;

    printf("Introduzca el número de la operación a realizar ...: \n");
    scanf(" %d", &case1);

     switch(case1)
     {
        case 1:
             printf("Case1=1     +\n");
        break;
 
        case 2:
        if (case1 == 2){
             printf("Case1=2     -\n");
         }
        else{break;}

        case 3:
        if (case1 == 3){
             printf("Case1=3     /\n");
         }
        else{break;}

        case 4:
        if (case1 == 4){
             printf("Case1=4     *\n");
         }
        else{break;}
         
         default:
           printf("Default: Value is: %d\n", case1);
    }
    return 0;
}