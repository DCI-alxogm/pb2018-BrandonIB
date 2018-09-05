#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float res;//se declara la variable flotante res (resultado)
    int n=3,k,j;//se declaran las variables enteras para los ciclos for

    for(j=0;j<n;j++){//se inicia primer ciclo for, se declara valor de variable j y se enuncia que se cumpla el ciclo for cuando j sea menor que n, el cual vale 3. j se irá incrementando de uno en uno cada vuelta (j++)

            for(k=0;k<n;k++){//dentro del primer ciclio for, se incluye otro ciclo for que ahora declara valor para k, el cual se indica que tendrá que ser menor que n y se irá incrementando el valor de k uno en uno cada vuelta (k++)
                    res=j*k*1.0;//se realiza operacion
                    printf("%i %i %f\n",j,k,res);//se imprimen los valores de j y k así como res (resultados)
            }
    }
    return 0;
}
