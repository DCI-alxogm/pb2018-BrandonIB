#include <stdio.h>


int main(){

int a;

printf("Introduce un numero\n");//pide un n�mero al usuario
scanf("%i", &a);//escanea el dato como entero

if(a%2==0){//inicia Bucle IF para dar una condici�n, si la variable es par
printf("a=%i es par\n",a);
}else{//si su m�dulo determina que no es par, se ejecuta la siguiente l�nea
printf("a=%i es impar\n",a);//imprime a la pantalla que es impar
}

return 0;
}
