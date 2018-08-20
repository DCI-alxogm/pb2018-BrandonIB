
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float d;
    float a,b,c;
    float r;

    printf("Escribe el valor de la variable\n");
    scanf("%f", &d);

    r=(3.142/180)*d;
    a=2.718281*d;
    b= ((cos(r))+(2*(tan(r/2)))) ;
    c= (log(d)+(3*((d*d))));

    printf("La funcion a muestra %f:\n",a);
    printf("La funcion b muestra %f:\n",b);
    printf("La funcion c muestra %f:\n",c);

    return 0;
}
