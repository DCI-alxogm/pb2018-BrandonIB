#include <stdio.h>
void cuadrado(float numero);

int main()
{
    float numero;
    printf("Escriba un numero\n");
    scanf("%f", &numero);
    cuadrado(numero);
    return 0;
}
void cuadrado(float numero){
    float cuadrado;
    cuadrado = numero*numero;
    printf("el cuadrado del numero es %f", cuadrado);

}
