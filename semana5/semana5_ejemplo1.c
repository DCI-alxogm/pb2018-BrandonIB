#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float temp_C, temp_K;
    float Temp_C, final, delta;
    int n, i;
    //char Si=1;
    int m=1;

    while (m==1){

    printf("Este programa convierte series de temperatura de C a K, Define la \ntemperatura inicial para C para el espaciado\n");
    scanf("%f", &Temp_C);
    printf("Define un valor para final para el espaciado\n");
    scanf("%f", &final);
    printf("Escribe el numero de pasos n para las conversiones\n");
    scanf("%i", &n);

    printf("Los valores son: \n");

    delta=(final-Temp_C)/n;

    for(i=0;i<n;i++){
        temp_K=temp_C+273.15;
        printf("%f %f\n",temp_C,temp_K);
        temp_C=temp_C+delta;
    }

    printf("¿Quieres ejecutar de nuevo el programa?, escribe 1 para si o no escribe 2\n");
    scanf("%i", &m);

    }



    return 0;
}

/*añadir un while para que el usuario pueda ejecutar el programa nuevamente (como en el ejercicio de la semana 4).
Y haz que el usuario pueda definir las temperaturas inicial (Temp_C), final (final) y numero de pasos (n) */
