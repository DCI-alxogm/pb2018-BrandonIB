#include <stdio.h>
int  num, valorbinario, valordecimal = 0, base = 1, a;
int n, c, k;
int main(){
    int opcion;
    printf("Si quieres convertir binario a decimal escribe 1 o 2 para decimal a binario\n");
    scanf("%i", &opcion);

    switch(opcion){
    case 1:

    printf("Escribe el numero binario \n");
    scanf("%d", &num);
    valorbinario = num;
    while (num > 0)
    {
        a = num % 10;
        valordecimal = valordecimal + a * base;
        num = num / 10 ;
        base = base * 2;
    }
    printf("El numero binario : %d \n", valorbinario);
    printf("Es equivalente en decimal al numero : %d \n", valordecimal);
break;

case 2:

  printf("Escribe el numero decimal \n");
  scanf("%d", &n);
  printf("%d en binario es :\n", n);
  for (c = 30; c >= 0; c--)
  {
    k = n >> c;

    if (k & 1)
      printf("1");
    else
      printf("0");
  }
  printf("\n");
  break;
    }
  return 0;
}

