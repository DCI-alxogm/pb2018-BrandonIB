#include <stdio.h>

int main()
{
int numero1, numero2;//se declaran dos variables enteras

printf("Introduzca dos numeros enteros:");//se pide al usuario dos n�meros
scanf("%i %i", &numero1, &numero2);

if(numero1==numero2)//se inicia bucle if, con la condici�n de que los dos n�meros son iguales
{
printf("Resultado: %i = %i,numero1,numero2");//si la l�nea anterior es verdadera, se ejecuta esta l�nea
}

else if (numero1>numero2)//si la l�nea anterior no fuese verdadera, se ejecuta else, con diferente condici�n
{
printf("Resultado: %i > %i", numero1, numero2);//se imprime a la pantalla esta l�nea
}

else
{printf("Result: %i < %i",numero1, numero2);//si la l�nea anterior no fuese verdadera, se condiciona este else y se imprime la l�nea
}

return 0;
}

