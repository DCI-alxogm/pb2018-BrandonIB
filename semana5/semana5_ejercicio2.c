#include <stdlib.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int c, num, fact = 1;
  int op=1;

  while (op==1){
  printf("Escribe un numero entero para calcular su factorial\n");
  scanf("%d", &num);

  for (c = 1; c <= num; c++)
    fact = fact * c;

  printf("El factorial es %d = %d\n", num, fact);

    printf("¿Quieres ejecutar de nuevo el programa?\n");
  scanf("%i", &op);
  }


  return 0;
}
