#include <stdio.h>
#include <stdlib.h>


int main () {


int var = 20; //declaración de la variable
int *ip; //declaración de la variable apuntador
ip = &var; //asigna la dirección de la variable var al apuntador ip

printf("La dirección de la variable var es: %x \n", (int) &var );
printf("Direccion guardada en el apuntador ip: %x \n", (int) ip );
printf("El valor de *ip: %d\n", *ip );


return 0;
}
