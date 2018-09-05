#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp_C, temp_K;
    float inicial=100,final=200,delta;       //SE DECLARAN VARIABLES
    int n=10;
    int op=1;

        delta=(final-inicial)/n;    //Se realiza operación para asignar valor a delta, que resulta 10

        while(op==1){   //Se inicia bucle while con condicion inicial, que op sea igual a 1, mientras se cumpla esta condicion, se ejecutaran las siguientes lineas
            temp_K=0;//se asigna valor a esta variable para que las operaciones siguientes se ejecuten con temp_K valiendo 0
            temp_C=inicial;//Se asigna igualdad entre estas dos variables

            while(temp_C<=final){   //se incluye segundo bucle While con la condicion de que temp_C sea menor o igual a final, que vale 200
                temp_K=temp_C+273.15;//se convierte a Kelvin
                printf("%f %f\n",temp_C,temp_K);//Se imprimen resultados
                temp_C=temp_C+delta;//antes de seguir indefinidamente el bucle, se realiza operación para asignar delta, que vale 10 (intervalo) a temp_C, para que cada vuelta, se vaya incrementando en 10 la variable para volver a realizar las operaciones o conversiones
            }
            printf("Deseas hacer otra operación? Presiona 1 para si, Presiona 2 para no\n");//se pregunta al usuario
            scanf("%i", &op);//se escanea op para que si ya no se quiere ejecutar el programa de nuevo, la condicion inicial del primer While ya no se cumpla y que op sea igual a 2.
        }
    return 0;
}
