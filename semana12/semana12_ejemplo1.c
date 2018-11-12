// 'hola_main.c':
#include "holamake.h"
void printholamake();

int main(){
printholamake();
return 0;
}


// 'holafunc.c':
#include <stdio.h>
#include "holamake.h"
void printholamake()
{
int test;
printf("Introduce algun digito, si hay respuesta, esta bien");
scanf("%d", &test);
if(test!=0){printf("hay respuesta")}
return 0;
}

