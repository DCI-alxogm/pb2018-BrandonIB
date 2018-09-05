#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float exp_;//se define variable flotante
    int n=10, j;//se define variable entera n, que es el numero de veces y j que se utilizará para for

    for(j=0;j<n;j++){//se inicia for, declarando que j=0 para que el calculo empiece desde 0 hasta que sea menor que n, el cual vale 10
            exp_=exp(j);//se realiza la operacion, la variable exp_ = exponencial del valor de j
            printf("%i \t %f\n",j,exp_);//se imprimen los resultados hasta la n en pantalla
    }
    return 0;
}
