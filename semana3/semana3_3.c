#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x,y,z;
    float x1,y1,z1;
    float r,o,a;

    printf("Este es un programa que convierte coordenadas cartesianas a esfericas hecho por BRANDON HDEZ CORONA");

    printf("Escribe la coordenada cartesiana para x\n");
    scanf("%f", &x);

    printf("Escribe la coordenada cartesiana para y\n");
    scanf("%f", &y);

    printf("Escribe la coordenada cartesiana para z\n");
    scanf("%f", &z);

    r =sqrt(x*x+y*y+z*z);

    x1= (3.1416/180)*x;
    y1= (3.1416/180)*y;
    z1= (3.1416/180)*z;

    o= acos(z1/r);
    a= atan(y1/x1);

    printf("La coordenada esferica r es %f:\n",r);
    printf("La coordenada esferica o es %f:\n",o);
    printf("La coordenada esferica a es %f:\n",a);




    return 0;
}
