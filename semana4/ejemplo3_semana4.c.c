#include<stdio.h>

int main()
{

float temp_C,temp_K;
float inicial=100,final=200,delta;      //SE DECLARAN VARIABLES
int n=10;
char op[2];

op[0]='s';  //Se declara
delta=(final-inicial)/n;    //Se realiza la operacion para asignar valor a delta, que resulta 10 y define el intervalo.

while(op[0]=='s'){  //se inicia bucle while con la condicion de que op[0] sea igual a 's'
temp_K=0.;  //se define el valor inicial de temp_K
temp_C=inicial; //se asigna valor a temp_C

while(temp_C<=final){   //se inicia segundo bucle while con la condicion inicial de quetem_C sea menor o igual que final
temp_K=temp_C+273.15;   //se realiza operacion de conversion a Kelvin
printf("%f %f\n",temp_C,temp_K);    //se imprimen los resultados
temp_C=temp_C+delta; // temp_C+=delta; Aquí se incrementa el valor del intervalo con delta que vale 10, para que en un momento dado el while ya no se cumpla
}

printf("Deseas hacer otra operacion? (si/no)\n");
scanf("%s",op); //se escanea op, para que si el resultado es 'si' entonces se repita el proceso, sino es 'si', se finalice el programa
}


return 0;
}
