#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Este es un programa hecho por BRANDON HDEZ CORONA\n\n");

    int opcion, t;


	t = 1;
    while (t>0){
              printf("Si quieres convertir temperatura escribe 1, o coordenadas 2\n");
    scanf("%i", &opcion);
        switch(opcion){
    case 1:
                        printf("Ud eligio la opcion 1\n");

                float c;
                float K;
                float f;

                printf("\nTemperatura en c por favor\n");
                scanf("%f", &c);

                K=c+273.15;
                f=((9*c)/5)+32;

                printf("La temperatura en K es %f:\n",K);
                printf("La temperatura en f es %f:\n",f);

                printf("Si quieres convertir temperatura escribe 1, o coordenadas 2\n");
                scanf("%i", &opcion);

                if (opcion==1){
                t++;}
                else if (opcion==2){t=0;}
       break;
	case 2:
        printf("Ud eligio la opcion 2");
    float x,y,z;
    float r,o,a;
    float divisiono, divisiona;
    float o_grad, a_grad;

    printf("\n\nEscribe la coordenada cartesiana para x\n");
    scanf("%f", &x);

    printf("Escribe la coordenada cartesiana para y\n");
    scanf("%f", &y);

    printf("Escribe la coordenada cartesiana para z\n");
    scanf("%f", &z);

    if ((x>0)&&(y>0)){
        printf("\nLas coordenadas en plano euclideo estan en el cuadrante 1\n");
    }

    else if ((x<0) && (y<0)){
    printf("\nLas coordenadas en plano euclideo estan en el cuadrante 3\n");
    }

    else if ((x>0) && (y<0)){
    printf("\nLas coordenadas en plano euclideo estan en el cuadrante 4\n");
    }

    else if ((x<0) && (y>0)){
    printf("\nLas coordenadas en plano euclideo estan en el cuadrante 2\n");
    }

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


   printf("Si quieres convertir temperatura escribe 1, o coordenadas 2\n");
                scanf("%i", &opcion);

                if (opcion==1){
                t++;}
                else if (opcion==2){t=0;}
            break;
    default:
            printf("Opcion invalida");
            break;
    }}


    return 0;
}
