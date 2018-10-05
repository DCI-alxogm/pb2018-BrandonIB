#include <stdio.h>
#include <stdlib.h>



int main(){


int i, sum = 0;
int *num;

printf("Introduce 6 números enteros:\n");


for(i = 0; i < 6; ++i)
{
// (num + i) es equivalente a &num[i]
scanf("%d",&num[i]);
num = (int*) malloc( num*sizeof(int) );
// *(num + i) es equivalente a num[i]
sum +=num[i];
}

printf("Suma = %d", sum);


return 0;
}
