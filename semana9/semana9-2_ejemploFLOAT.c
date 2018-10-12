#include <stdio.h>

float cuadrado(float h);

int main()
{
    float x,x2;
    printf("Escribe un numero\n");
    scanf("%f", &x);
    x2=cuadrado(x);
    printf("El cuadrado del numero es %f\n",x2);

    return 0;
}

float cuadrado(float h){
return h*h;
}
