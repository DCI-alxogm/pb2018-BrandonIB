#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float temp_C, temp_K;
    float Temp_C, final, delta;
    int n, i;
    int m=1;

    while (m==1){ //inicia Bucle while para cumplir condicion, si la variable se mantiene en 1, se ejecuta de nuevo el programa

    printf("Este programa convierte series de temperatura de C a K, Define la \ntemperatura inicial para C para el espaciado\n");
    scanf("%f", &Temp_C);//escanea el valor de la variable
    printf("Define un valor para final para el espaciado\n");
    scanf("%f", &final);//escanea el valor de la variable
    printf("Escribe el numero de pasos n para las conversiones\n");
    scanf("%i", &n);//escanea el valor de la variable

    printf("Los valores son: \n");

    delta=(final-Temp_C)/n;//se realiza operacion para asignar valor a variable delta, que es la diferencia de las variables final y Temp_C

    for(i=0;i<n;i++){//se inicia bucle for, con las condiciones entre parentesis, el valor de i tiene que ser cero y menor que la variable n, tambien se indica que el valor de i se incrementará 1 cada ciclo (i++)
        temp_K=temp_C+273.15;//se convierte la temperatura a Kelvin
        printf("%f %f\n",temp_C,temp_K);
        temp_C=temp_C+delta;//se realiza la operacion para asignacion de valor a variable temp_C
    }

    printf("¿Quieres ejecutar de nuevo el programa?, escribe 1 para si o no escribe 2\n");//pregunta al usuario si se quiere ejecutar de nuevo el programa
    scanf("%i", &m);//escanea el valor introducido ya sea 1 o 2 para asignar el valor a la variable m, de la cual depende el bucle while, que tiene como condicion que m sea igual a 1.

    }



    return 0;
}

