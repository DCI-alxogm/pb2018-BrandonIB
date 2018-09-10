#include <stdlib.h>
#include <stdio.h>


int main(){
int i,N=10;
float numeros[N];
for (i=0;i<N;i++){
scanf("%f", &numeros[i]);
numeros[i]*=2;//multiplica el numero dado por 2
printf("%f\n",numeros[i]);//imprime el valor del arreglo modificado.
}

return 0;
}

