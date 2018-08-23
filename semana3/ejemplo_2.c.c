#include <stdio.h>

int main()
{
int numero1, numero2;//se declaran dos variables enteras

printf("Introduzca dos numeros enteros:");//se pide al usuario dos números
scanf("%i %i", &numero1, &numero2);

if(numero1==numero2)//se inicia bucle if, con la condición de que los dos números son iguales
{
printf("Resultado: %i = %i,numero1,numero2");//si la línea anterior es verdadera, se ejecuta esta línea
}

else if (numero1>numero2)//si la línea anterior no fuese verdadera, se ejecuta else, con diferente condición
{
printf("Resultado: %i > %i", numero1, numero2);//se imprime a la pantalla esta línea
}

else
{printf("Result: %i < %i",numero1, numero2);//si la línea anterior no fuese verdadera, se condiciona este else y se imprime la línea
}

return 0;
}

