#include <stdio.h>


int main(){

int a;

printf("Introduce un numero\n");//pide un número al usuario
scanf("%i", &a);//escanea el dato como entero

if(a%2==0){//inicia Bucle IF para dar una condición, si la variable es par
printf("a=%i es par\n",a);
}else{//si su módulo determina que no es par, se ejecuta la siguiente línea
printf("a=%i es impar\n",a);//imprime a la pantalla que es impar
}

return 0;
}
