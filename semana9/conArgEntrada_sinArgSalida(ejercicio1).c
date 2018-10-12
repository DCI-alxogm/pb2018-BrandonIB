#include <stdio.h>
#include <conio.h>

void cuadrado (float);
float main()
{
    float a, c;
    printf("Escribe 1 si deseas continuar\n");
    scanf("%f", &a);
    if(a==1){
    cuadrado(a);
    }
}

void cuadrado(float n)
{
    float s;
    s=n*n;
    printf("Elegiste que Si deseas continuar, por cierto, el Cuadrado de 1 es: %f\n", s);

}

