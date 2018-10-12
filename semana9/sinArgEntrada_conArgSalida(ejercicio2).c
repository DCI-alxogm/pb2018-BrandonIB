#include <stdio.h>
#include <conio.h>

float cuadrado(void);

int main()
{
float r;
r=cuadrado();
printf("\nCuadrado: %f\n", r);
}

float cuadrado(void)
{
    float a,c;
    printf("Escribe un numero\n");
    scanf("%f", &a);
    c=a*a;
    return(c);
}
