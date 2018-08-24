#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x,y,z;
    float r,o,a;
    float divisiono, divisiona;
    float o_grad, a_grad;
    float esferica1, esferica2, esferica3;
    float cartesiana1, cartesiana2, cartesiana3;

    printf("Este es un programa que convierte coordenadas cartesianas a esfericas hecho por BRANDON HDEZ CORONA\n\n");

    printf("Escribe la coordenada cartesiana para x\n");
    scanf("%f", &x);

    printf("Escribe la coordenada cartesiana para y\n");
    scanf("%f", &y);

    printf("Escribe la coordenada cartesiana para z\n");
    scanf("%f", &z);

    r=sqrt(x*x+y*y+z*z);

    divisiono = y/x;
    divisiona = z/r;

    o = atan(divisiono);
    a = acos(divisiona);

    o_grad = (o/3.1416)*180;
    a_grad = (a/3.1416)*180;

    printf("\nLa coordenada esferica r es %f:\n",r);
    printf("La coordenada esferica o es %f:\n",o);
    printf("La coordenada esferica a es %f:\n\n",a);

    printf("La coordenada esferica r en grados es %f:\n", r);
    printf("La coordenada esferica o en grados es %f:\n", o_grad);
    printf("La coordenada esferica a en grados es %f:\n", a_grad);




    printf("\n\nEscribe la coordenada esferica para r\n");
    scanf("%f", &esferica1);

    printf("Escribe la coordenada esferica para o\n");
    scanf("%f", &esferica2);

    printf("Escribe la coordenada esferica para a\n");
    scanf("%f", &esferica3);


    cartesiana1= esferica1*(sin(esferica3))*(cos(esferica2));
    cartesiana2= esferica1*(sin(esferica3))*(sin(esferica2));
    cartesiana3= esferica1*(cos(esferica3));

    printf("\nLa coordenada cartesiana para x en radian es: %f\n", cartesiana1);
    printf("La coordenada cartesiana para y en radian es: %f\n", cartesiana2);
    printf("La coordenada cartesiana para z en radian es: %f\n", cartesiana3);



    return 0;
}
