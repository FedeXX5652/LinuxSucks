#include <stdio.h>

int main(void){
    int a = 0;
    int b = 0;
    int c = 0;

    printf("Ingrese el primer lado: \n");
	scanf("%d", &a);
    printf("Ingrese el segundo lado: \n");
	scanf("%d", &b);
    printf("Ingrese el tercer lado: \n");
	scanf("%d", &c);
   
if(a==b&&a==c)
{
printf("\n El triangulo es equilatero\n");
}

else if(a==b||a==c||b==c)
{
printf("\n El triangulo es isosceles\n");
}

else if(a!=b&&a!=c&&b!=c)
{
printf("\n El triangulo es escaleno\n");
}
    
}