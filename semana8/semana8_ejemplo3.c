#include <stdio.h>
#include <stdlib.h>

int main () {

int MAX = 3;
int var[] = {10, 100, 200};
int i, *ptr;
//Asignamos la direcci�n del arreglo al apuntador
ptr = &var;

for ( i = 0; i < MAX; i++) {
printf("la direcci�n de la variable var[%d] = %x\n", i, ptr);
printf("Valor de la variable var[%d] = %d\n", i, *ptr );
//nos movemos a la siguiente posici�n en la memoria
ptr++;
}


return 0;
}
