#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp_C, temp_K;
    float inicial=100,final=200,delta;
    int n=10;

    delta=(final-inicial)/n;//se realiza operacion para asignar valor a delta, que resulta 10
    temp_C=inicial;//se dicta igualdad entre estas dos variables

    while(temp_C<=final){//se inicia el bucle while, dictando la condicion, que la variable temp_C tenga que ser menor o igual a final, mientras se cumpla esto, se ejecutarán las siguientes lineas
    temp_K=temp_C+273.15;//se convierte temperatura a Kelvin
    printf("%f %f\n",temp_C,temp_K);//se imprimien resultados en pantalla
    temp_C=temp_C+delta;//esta operación indica que el ciclo se realiza con un intervalo de 10, ya que se le suma delta, el cual vale 10
    }
    return 0;
}
