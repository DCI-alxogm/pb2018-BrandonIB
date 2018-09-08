#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float eu,lo,si,co,sq;
    float x;
    int n, lim, base;
    int delta;

    printf("define el numero mayor para el intervalo de la variable 'x'\n");
    scanf("%d", &lim);
    printf("define el primer numero del intervalo\n");
    scanf("%i", &base);

    for(n=base;n<=lim;n++)

        eu=exp(x);
        lo=log(x);
        si=sin(x);
        co=cos(x);
        sq=sqrt(x);

        printf("%f", eu);
//printf("%c %c %c %c %c Los resultados son:  \n",eu,lo,si,co,sq);


    return 0;
}
