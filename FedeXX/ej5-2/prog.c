

#include "link.h"

int main(){

    unsigned char a = 0;
    unsigned char b = 0;
    unsigned char res = 0;

    printf("Ingrese A: \n");
    scanf("%hhu",&a);
    printf("Ingrese B:\n");
    scanf("%hhu",&b);

    printf("A=%hhu-----B=%hhu\n",a, b);

    res = suma_saturada(a,b);

    printf("Resultado = %hhu\n", res);
    printf("A casa peton\n\n");

    printf("Todos los derechos reservados a LINUXSUXS™, una subdivisión de la empresa UMBRELLA.INC®\n");

    return 0;
}